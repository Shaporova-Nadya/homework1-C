cmake_minimum_required(VERSION 3.25)

project(sbrackets C)

add_library(brackets StackBrackets.c)
add_library(stack stack.c)
target_link_libraries(stack PUBLIC brackets)
add_executable(main main.c StackBrackets.c)
target_link_libraries(main PRIVATE brackets)
