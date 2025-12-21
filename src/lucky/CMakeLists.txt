cmake_minimum_required(VERSION 3.25)
project(Lucky C)

add_library(luckyTickets lucky_tickets.c)
add_executable(main main.c)

target_link_libraries(main PRIVATE luckyTickets)