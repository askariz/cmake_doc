#minimum required of cmake project .
cmake_minimum_required( VERSION 2.9)
project(cmake_test)

#set project version number
set(CMAKE_TEST_VERSION_MAJOR 1)
set(CMAKE_TEST_VERSION_MINOR 2)

#config a .in file to generate .h file in the build dictionary
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

include_directories(
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/mylib"
)

# learn how to add a library 
add_subdirectory(mylib)

add_executable(cmake_test main.cpp)
target_link_libraries(cmake_test mylib)