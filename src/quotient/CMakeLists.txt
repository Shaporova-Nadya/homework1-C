cmake_minimum_required(VERSION 3.25)
project(Quotient C)

add_library(quotient quotient.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE quotient)