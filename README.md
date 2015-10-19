# rtthread_fsl
RT-Thread for FreeScale branch, which includes Kinetis, i.MX Series.

# folder structure

-- *build
 |
 - *lib
 |
 - bsp
    |
	- *kinetis
	|
	- *imx
 |
 - tools
 |
 - components
 |
 - libcpu
 |
 - documentation
 |
 - include
 |
 - *utils
 
 Notes:
 1. the * leading folder is the new added folder to rt-thread.
 2. build folder stores the projects and makefiles and the temporary obj files.
 3. lib folder stores the Kinetis SDK library files.
 4. bsp/kinetis folder stores the SDK files and proting code for Kinetis SDK_1.3 from original Freescale SDK 1.3
 5. imx is the folder for i.MX related platform.
 6. utils folder stores the utils libs which is used in the motor demo of sdk

 # supporting platform
for rt_thread_demo below platform are supported.
frdmk22f
frdmk64f
frdmkl03z
frdmkl25z
frdmkl26z
frdmkl27z
frdmkl43z
frdmkl46z
frdmkv31f
frdmkw24
frdmkw40z
twrk64f120m
for motor demo
twrk64f120m is supported, which also adding the InvenSense MDP motion library

# support tool-chain.
IAR / UV4 / KDS / armgcc(CMAKE) / ATL
for CMAKE, you need install the CMAKE, and armgcc latest version, and also export a system virable ARMGCC_DIR
ARMGCC_DIR = "C:\Program Files (x86)\GNU Tools ARM Embedded\4.9 2015q1"

# reason to use SDK.
the SDK driver can be used directly as demoed in the rt_thread_demo and motor_demo. so no further porting work for drivers.


