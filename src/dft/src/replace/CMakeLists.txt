# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2023-2025, The OpenROAD Authors

add_library(dft_replace_lib
  # Keep sorted
  ScanReplace.cpp
)

target_link_libraries(dft_replace_lib
  PRIVATE
    odb
    dbSta
    OpenSTA
    utl_lib
    dft_utils_lib
)

target_include_directories(dft_replace_lib
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)
