cmake_minimum_required(VERSION 3.25)
project(double C)

add_library(Double Double.c)
add_executable(main main.c)
target_link_libraries(main PRIVATE Double)