cmake -DUSE_SPLINT=ON -DCMAKE_TOOLCHAIN_FILE="../../../../../bsp/kinetis/cmake_toolchain_files/armgcc.cmake" -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug  .
mingw32-make -j4 2> build_log.txt 
IF "%1" == "" ( pause ) 
