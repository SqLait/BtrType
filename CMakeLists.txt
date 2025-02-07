cmake_minimum_required(VERSION 3.10)  # Minimum version for C17 support
project(BtrType C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

add_executable(main btrtypes/Dict.c)  # Replace with your source files
