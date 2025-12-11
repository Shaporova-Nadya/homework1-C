cmake_minimum_required(VERSION 3.25)

project(task2)

add_library(task2 task2.c)
add_executable(main2 main2.c)
target_link_libraries(main PRIVATE task2)