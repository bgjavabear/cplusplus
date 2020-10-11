cmake_minimum_required(VERSION 3.15)
project(accelarated)

set(CMAKE_CXX_STANDARD 20)

add_executable(accelarated algo/insertion_sort/main.cpp utils/utils.cpp utils/utils.h)