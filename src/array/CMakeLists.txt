cmake_minimum_required(VERSION 3.25)
project(Array C)

add_library(Array array.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE Array)