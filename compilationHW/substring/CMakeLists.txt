cmake_minimum_required(VERSION 3.25)
project(Substring C)

add_library(substring substring.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE substring)