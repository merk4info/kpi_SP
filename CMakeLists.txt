cmake_minimum_required(VERSION 3.21)
project(kpi-embedded-5s C)

set(CMAKE_C_STANDARD 99)

add_executable(harry_potter harry_potter.c)
add_library(lib SHARED lib.c lib.h)
