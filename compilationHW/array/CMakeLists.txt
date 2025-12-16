cmake_minimum_required(VERSION 3.25)
project(Array C)

add_library(array array0.c)
add_executable(main mian.c)

target_link_libraries(main PRIVATE array)