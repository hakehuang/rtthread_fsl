#!/bin/sh
cmake -DCMAKE_TOOLCHAIN_FILE="../../../../../build_system/tools/cmake_toolchain_files/armgcc.cmake" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release  .
make -j4
