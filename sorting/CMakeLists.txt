# Минимальная версия CMake, необходимая для сборки
cmake_minimum_required(VERSION 3.25)

# Устанавливаем имя проекта
project(station C)

add_library(station SortingStation.c)
add_library(stack stack.c)
target_link_libraries(stack PUBLIC station)
add_executable(main main.c SortingStation.c)
target_link_libraries(main PRIVATE station)
