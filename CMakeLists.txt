cmake_minimum_required(VERSION 3.22)

project(station C)

add_library(station stHW/SortStation.c)
add_library(stack stHW/stackHW/Stack.c)
target_link_libraries(station PUBLIC stack)
add_executable(main stHW/main.c)
target_compile_options(main 
PRIVATE 
  -Wall
  -Wextra
  -Wpedantic
)
target_link_libraries(main PRIVATE station)