cmake_minimum_required(VERSION 3.25)
project(Brackets C)

add_library(brackets brackets.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE brackets)