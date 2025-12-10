cmake_minimum_required(VERSION 3.25)

project(station C)

add_library(station SortStation.c)
add_library(stack Stack.c)
target_link_libraries(stack PUBLIC station)
add_executable(main main.c SortStation.c)
target_link_libraries(main PRIVATE station)