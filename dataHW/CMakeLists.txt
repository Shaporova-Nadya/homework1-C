cmake_minimum_required(VERSION 3.25)
project(binary C)

add_library(Lib Lib.c)
add_executable(main main.c)
target_link_libraries(main PRIVATE Lib)