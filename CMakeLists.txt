# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name

project(b2l)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

# the following folder will be included


include_directories(include)

file(GLOB SOURCES main.c ./src/bst_to_list.c ./src/bst.c ./src/list.c)

add_executable(main ${SOURCES})
target_compile_options(main PRIVATE -g)
