cmake_minimum_required(VERSION 2.8)
add_definitions("-Wall -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "-pthread")
include_directories(../../tools)

add_subdirectory(../src src)
add_subdirectory(../../tools/gtest gtest)
add_executable(IteratorTest BookShelfTest.cpp BookShelfIteratorTest.cpp)
target_link_libraries(IteratorTest Iterator gtest)
