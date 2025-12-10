cmake_minimum_required(VERSION 3.25)

project(sbrackets C)

add_library(brackets StackBr.c)
add_library(stack Stack.c)
target_link_libraries(stack PUBLIC brackets)
add_executable(main main.c StackBr.c)
target_link_libraries(main PRIVATE brackets)