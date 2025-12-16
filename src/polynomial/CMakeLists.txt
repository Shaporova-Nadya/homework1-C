cmake_minimum_required(VERSION 3.25)
project(Polynomial C)

add_library(polynomial polynomial.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE polynomial)