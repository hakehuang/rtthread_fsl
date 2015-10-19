INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m0plus")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m0plus")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MKL43Z256VLH4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m0plus")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MKL43Z256VLH4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m0plus")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices/MKL43Z4/include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices/MKL43Z4/startup)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../../components/finsh)

include_directories(${ProjDirPath}/../../../../../include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/osa/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices/MKL43Z4/include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/devices/MKL43Z4/startup)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/utilities/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc)

include_directories(${ProjDirPath}/../../../../../components/drivers/include/drivers)

include_directories(${ProjDirPath}/../../../../../components/drivers/include)

include_directories(${ProjDirPath}/../../../../../bsp/kinetis/driver_wrapper/inc)

include_directories(${ProjDirPath}/../../../../../components/finsh)

include_directories(${ProjDirPath}/../../../../../include)

add_library(libksdk_platform.a STATIC
"${ProjDirPath}/../../../../../bsp/kinetis/platform/osa/inc/fsl_os_abstraction.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/osa/inc/fsl_os_abstraction_bm.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/osa/src/fsl_os_abstraction_bm.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/clock/fsl_clock_manager.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_clock_manager.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/clock/fsl_clock_manager_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/clock/MKL43Z4/fsl_clock_MKL43Z4.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/clock/MKL43Z4/fsl_clock_MKL43Z4.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/interrupt/fsl_interrupt_manager.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_interrupt_manager.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/hwtimer/fsl_hwtimer.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_hwtimer.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/hwtimer/fsl_hwtimer_pit.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_hwtimer_pit.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/hwtimer/fsl_hwtimer_systick.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_hwtimer_systick.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/power/fsl_power_manager.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/inc/fsl_power_manager.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/system/src/power/fsl_power_manager_common.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/adc16/fsl_adc16_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_adc16_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_adc16_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/adc16/fsl_adc16_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/adc16/fsl_adc16_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/cmp/fsl_cmp_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_cmp_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/cmp/fsl_cmp_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_cmp_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/cmp/fsl_cmp_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/cop/fsl_cop_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_cop_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/cop/fsl_cop_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_cop_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/cop/fsl_cop_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/dac/fsl_dac_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_dac_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/dac/fsl_dac_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_dac_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/dac/fsl_dac_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/dma/fsl_dma_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_dma_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/dma/fsl_dma_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_dma_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_dma_request.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/dma/fsl_dma_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/dmamux/fsl_dmamux_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_dmamux_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/flexio/fsl_flexio_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_flexio_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/flexio/fsl_flexio_uart_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_flexio_uart_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/flexio/fsl_flexio_spi_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_flexio_spi_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/flexio/fsl_flexio_i2s_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_flexio_i2s_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/flexio/fsl_flexio_i2c_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_flexio_i2c_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_uart_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_uart_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_uart_share.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_i2s_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_i2s_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_spi_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_spi_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_i2c_master_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_i2c_master_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/flexio/fsl_flexio_uart_dma_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_flexio_uart_dma_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/gpio/fsl_gpio_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_gpio_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/gpio/fsl_gpio_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/gpio/fsl_gpio_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_gpio_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/i2c/fsl_i2c_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_i2c_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/i2c/fsl_i2c_shared_function.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_i2c_shared_function.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/i2c/fsl_i2c_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/i2c/fsl_i2c_master_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_i2c_master_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/i2c/fsl_i2c_slave_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_i2c_slave_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/llwu/fsl_llwu_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_llwu_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/lptmr/fsl_lptmr_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_lptmr_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_lptmr_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/lptmr/fsl_lptmr_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/lptmr/fsl_lptmr_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/lpuart/fsl_lpuart_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_lpuart_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_lpuart_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/lpuart/fsl_lpuart_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/lpuart/fsl_lpuart_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/lpuart/fsl_lpuart_dma_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_lpuart_dma_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/mcglite/fsl_mcglite_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_mcglite_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/mcglite/fsl_mcglite_hal_modes.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_mcglite_hal_modes.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/osc/fsl_osc_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_osc_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/pit/fsl_pit_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_pit_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/pit/fsl_pit_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_pit_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/pit/fsl_pit_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/port/fsl_port_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_port_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/rtc/fsl_rtc_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_rtc_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/rtc/fsl_rtc_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_rtc_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/rtc/fsl_rtc_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/sai/fsl_sai_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_sai_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/sai/fsl_sai_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_sai_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/sai/fsl_sai_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_sim_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/sim/MKL43Z4/fsl_sim_hal_MKL43Z4.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/sim/MKL43Z4/fsl_sim_hal_MKL43Z4.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/spi/fsl_spi_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_spi_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_shared_function.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_shared_function.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_master_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_master_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_slave_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_slave_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_dma_master_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_dma_master_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_dma_slave_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_dma_slave_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/spi/fsl_spi_dma_shared_function.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_spi_dma_shared_function.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/smc/fsl_smc_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_smc_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_pmc_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/rcm/fsl_rcm_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_rcm_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_tpm_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/tpm/fsl_tpm_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/tpm/fsl_tpm_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/tpm/fsl_tpm_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_tpm_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_uart_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/uart/fsl_uart_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/uart/fsl_uart_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/uart/fsl_uart_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_uart_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/uart/fsl_uart_dma_driver.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_uart_dma_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/src/vref/fsl_vref_hal.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/hal/inc/fsl_vref_hal.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/inc/fsl_vref_driver.h"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/vref/fsl_vref_common.c"
"${ProjDirPath}/../../../../../bsp/kinetis/platform/drivers/src/vref/fsl_vref_driver.c"
)


