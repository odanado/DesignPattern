cmake_minimum_required(VERSION 2.8)
include_directories(..)
add_library(gtest STATIC
    gtest-all.cc
    gtest_main.cc
)
