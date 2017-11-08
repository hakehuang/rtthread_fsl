
INCLUDE(CMakeForceCompiler)
# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(C ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DMK64FN1M0xxx12=Freescale Semiconductor "
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG "
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTOOLCHAIN_GCC "
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTWR_K64F120M "
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DTARGET_K64F "
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK64FN1M0VMD12 "
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")
include_directories($ProjDirPath$/../../../../batches/hello_world)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers)
include_directories($ProjDirPath$/../../../../components/finsh)
include_directories($ProjDirPath$/../../../../include)
include_directories($ProjDirPath$/../../../../components/drivers/include/drivers)
include_directories($ProjDirPath$/../../../../components/drivers/include)
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG "
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DTOOLCHAIN_GCC "
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -mthumb")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MMD")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -MP")
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers)
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/gcc/MK64FN1M0xxx12_flash.ld -static")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DMK64FN1M0xxx12=Freescale Semiconductor "
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG "
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTOOLCHAIN_GCC "
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTWR_K64F120M "
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DTARGET_K64F "
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK64FN1M0VMD12 "
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")
include_directories($ProjDirPath$/../../../../batches/hello_world)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers)
include_directories($ProjDirPath$/../../../../components/finsh)
include_directories($ProjDirPath$/../../../../include)
include_directories($ProjDirPath$/../../../../components/drivers/include/drivers)
include_directories($ProjDirPath$/../../../../components/drivers/include)
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DTOOLCHAIN_GCC "
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -mthumb")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MMD")
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -MP")
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12)
include_directories($ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers)
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/gcc/MK64FN1M0xxx12_flash.ld -static")
add_executable(hello_world.elf
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/gcc/startup_MK64F12.S
$ProjDirPath$/../../../../batches/hello_world/main.cpp
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m/clock_config.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m/clock_config.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m/pin_mux.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/boards/twrk64f120m/pin_mux.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/MK64F12.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/MK64F12_features.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/fsl_device_registers.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/system_MK64F12.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/system_MK64F12.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_uart.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_uart.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_gpio.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_gpio.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_smc.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_smc.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_pit.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_pit.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_enet.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_enet.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_common.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_common.h
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_flash.c
$ProjDirPath$/../../../../bsp/kinetis/SDK_2.2_TWR-K64F120M/devices/MK64F12/drivers/fsl_flash.h
$ProjDirPath$/../../../../libcpu/arm/common/backtrace.c
$ProjDirPath$/../../../../libcpu/arm/common/div0.c
$ProjDirPath$/../../../../libcpu/arm/common/showmem.c
$ProjDirPath$/../../../../libcpu/arm/cortex-m4/cpuport.c
)
