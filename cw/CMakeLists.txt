cmake_minimum_required(VERSION 3.25)
project(compare C)
add_library(compare compare.c)

add_executable(main main.c)
targen_link_libraries(main PRIVATE compare)