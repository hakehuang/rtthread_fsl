/*
 * File      : drv_uart.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2013, RT-Thread Develop Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://openlab.rt-thread.com/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 *
 */

#include "drv_lpsci.h"

struct rt_serial_device _kinetis_serial;  //abstracted serial for RTT

struct kinetis_serial_device
{
    /* UART base address */
    UART0_Type *baseAddress;

    /* UART IRQ Number */
    int irq_num;

    /* device config */
    struct serial_configure config;
};

//hardware abstract device
static struct kinetis_serial_device _kinetis_uart_node =
{
    (UART0_Type *)BOARD_DEBUG_UART_BASEADDR,
    PM_DBG_UART_IRQn,
};

static lpsci_state_t uart_state[FSL_FEATURE_SOC_LPSCI_COUNT];

static rt_err_t _configure(struct rt_serial_device *serial, struct serial_configure *cfg)
{
    UART0_Type *uart_reg;
    unsigned int instance;

    /* ref : drivers\system_MK60F12.c Line 64 ,BusClock = 60MHz
     * calculate baud_rate
     */
    uart_reg = ((struct kinetis_serial_device *)serial->parent.user_data)->baseAddress;
 
    // Fill in uart config data
    lpsci_user_config_t uartConfig = {
        .bitCountPerChar = kLpsci8BitsPerChar,
        .parityMode      = kLpsciParityDisabled,
        .stopBitCount    = kLpsciOneStopBit,
        .baudRate        = BOARD_DEBUG_UART_BAUD
    };
    
    uartConfig.baudRate = cfg->baud_rate;
    uartConfig.bitCountPerChar = (lpsci_bit_count_per_char_t)cfg->data_bits;
    uartConfig.parityMode = (lpsci_parity_mode_t)cfg->parity;
    uartConfig.stopBitCount = (lpsci_stop_bit_count_t)cfg->stop_bits;
    
    /* Un-gate UART module clock */
    for (instance = 0; instance < UART0_INSTANCE_COUNT; instance++)
    {
      if(g_lpsciBase[instance] == uart_reg)
      {
         LPSCI_DRV_Init(instance, &uart_state[instance], &uartConfig);
         return RT_EOK;
      }
    }
    return RT_EOK;
}

static rt_err_t _control(struct rt_serial_device *serial, int cmd, void *arg)
{
    UART0_Type *uart_reg;
    int uart_irq_num = 0;

    uart_reg = ((struct kinetis_serial_device *)serial->parent.user_data)->baseAddress;
    uart_irq_num = ((struct kinetis_serial_device *)serial->parent.user_data)->irq_num;

    switch (cmd)
    {
    case RT_DEVICE_CTRL_CLR_INT:
        /* disable rx irq */
        //uart_reg->C2 &= ~UART_C2_RIE_MASK;
         UART_BWR_C2_RIE(uart_reg, 0U);
        //disable NVIC
        NVIC->ICER[uart_irq_num / 32] = 1 << (uart_irq_num % 32);
        break;
    case RT_DEVICE_CTRL_SET_INT:
        /* enable rx irq */
        //uart_reg->C2 |= UART_C2_RIE_MASK;
        UART_BWR_C2_RIE(uart_reg, 1U);
        //enable NVIC,we are sure uart's NVIC vector is in NVICICPR1
        NVIC->ICPR[uart_irq_num / 32] = 1 << (uart_irq_num % 32);
        NVIC->ISER[uart_irq_num / 32] = 1 << (uart_irq_num % 32);
        break;
    case RT_DEVICE_CTRL_SUSPEND:
        /* suspend device */
       // uart_reg->C2  &=  ~(UART_C2_RE_MASK |    //Receiver enable
       //                     UART_C2_TE_MASK);     //Transmitter enable
        UART_WR_C2(uart_reg, UART_RD_C2(uart_reg)&(~(UART_C2_RE_MASK |UART_C2_TE_MASK)));
        break;
    case RT_DEVICE_CTRL_RESUME:
        /* resume device */
       // uart_reg->C2  =  UART_C2_RE_MASK |    //Receiver enable
        //                 UART_C2_TE_MASK;     //Transmitter enable
        UART_WR_C2(uart_reg, UART_RD_C2(uart_reg)&(~(UART_C2_RE_MASK |UART_C2_TE_MASK)));
        break;
    }

    return RT_EOK;
}

static int _putc(struct rt_serial_device *serial, char c)
{
    UART0_Type *uart_reg;
    uart_reg = ((struct kinetis_serial_device *)serial->parent.user_data)->baseAddress;

    while (!(uart_reg->S1 & UART_S1_TDRE_MASK));
    uart_reg->D = (c & 0xFF);
    //UART_HAL_SendDataPolling(uart_reg, (uint8_t const *)&c, 1);
    return 1;
}

static int _getc(struct rt_serial_device *serial)
{
    UART0_Type *uart_reg;
    uart_reg = ((struct kinetis_serial_device *)serial->parent.user_data)->baseAddress;
    //uint8_t rxChar;
    
    //UART_HAL_Getchar(uart_reg , &rxChar);
    //return rxChar;
    if (uart_reg->S1 & UART_S1_RDRF_MASK)
        return (uart_reg->D);
    else
        return -1;
}

static const struct rt_uart_ops _kinetis_ops =
{
    _configure,
    _control,
    _putc,
    _getc,
};


void rt_hw_uart_init(void)
{
    struct serial_configure config;

    /* fake configuration */
    config.baud_rate = BOARD_DEBUG_UART_BAUD;
    config.bit_order = BIT_ORDER_LSB;
    config.data_bits = kLpsci8BitsPerChar;
    config.parity    = kLpsciParityDisabled;
    config.stop_bits = kLpsciOneStopBit;
    config.invert    = NRZ_NORMAL;
    config.bufsz     = RT_SERIAL_RB_BUFSZ;

    _kinetis_serial.ops    = &_kinetis_ops;
    _kinetis_serial.config = config;

    rt_hw_serial_register(&_kinetis_serial, CONSOLE_DEVICE,
                          RT_DEVICE_FLAG_RDWR | RT_DEVICE_FLAG_INT_RX | RT_DEVICE_FLAG_STREAM,
                          (void*)&_kinetis_uart_node);
}

