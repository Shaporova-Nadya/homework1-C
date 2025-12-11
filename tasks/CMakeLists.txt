cmake_minimum_required(VERSION 3.25)

project(task3)

add_library(task3 task3.c)
add_executable(main main3.c)
target_link_libraries(main PRIVATE task3)