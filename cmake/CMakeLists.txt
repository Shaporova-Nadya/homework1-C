cmake_minimum_required(VERSION 3.25)
project(Lists C)

add_library(lists lists.c)
add_executable(main main.c)
target_link_libraries(main PRIVATE lists)