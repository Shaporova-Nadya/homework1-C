cmake_minimum_required(VERSION 3.25)
project(Count C)

add_library(count count.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE count)