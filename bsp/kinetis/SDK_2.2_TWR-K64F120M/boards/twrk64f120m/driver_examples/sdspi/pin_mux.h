/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_


/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/* PORTC3 (coord A11), J10[2]/J11[A38]/J11[A64]/UART1_RX */
#define BOARD_INITPINS_DEBUG_UART_RX_PERIPHERAL                            UART1   /*!< Device name: UART1 */
#define BOARD_INITPINS_DEBUG_UART_RX_SIGNAL                                   RX   /*!< UART1 signal: RX */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN_NAME                           UART1_RX   /*!< Pin name */
#define BOARD_INITPINS_DEBUG_UART_RX_LABEL   "J10[2]/J11[A38]/J11[A64]/UART1_RX"   /*!< Label */
#define BOARD_INITPINS_DEBUG_UART_RX_NAME                        "DEBUG_UART_RX"   /*!< Identifier name */

/* PORTC4 (coord A9), J11[A37]/J15[2]/J11[A69]/UART1_TX */
#define BOARD_INITPINS_DEBUG_UART_TX_PERIPHERAL                            UART1   /*!< Device name: UART1 */
#define BOARD_INITPINS_DEBUG_UART_TX_SIGNAL                                   TX   /*!< UART1 signal: TX */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN_NAME                           UART1_TX   /*!< Pin name */
#define BOARD_INITPINS_DEBUG_UART_TX_LABEL   "J11[A37]/J15[2]/J11[A69]/UART1_TX"   /*!< Label */
#define BOARD_INITPINS_DEBUG_UART_TX_NAME                        "DEBUG_UART_TX"   /*!< Identifier name */

/* PORTD12 (coord B1), J11[B55]/J11[B56] */
#define BOARD_INITPINS_IRQ_G_H_GPIO                                        GPIOD   /*!< GPIO device name: GPIOD */
#define BOARD_INITPINS_IRQ_G_H_PORT                                        PORTD   /*!< PORT device name: PORTD */
#define BOARD_INITPINS_IRQ_G_H_GPIO_PIN                                      12U   /*!< PORTD pin index: 12 */
#define BOARD_INITPINS_IRQ_G_H_PIN_NAME                                    PTD12   /*!< Pin name */
#define BOARD_INITPINS_IRQ_G_H_LABEL                         "J11[B55]/J11[B56]"   /*!< Label */
#define BOARD_INITPINS_IRQ_G_H_NAME                                    "IRQ_G_H"   /*!< Identifier name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/