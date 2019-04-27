cmake_minimum_required(VERSION 3.10)
project(furgbol_io)

message("compling furgbol_io library")

include_directories("include")

add_library(fmath "src/calc.cpp")

add_executable(gok "src/teste.cpp")
target_link_libraries(gok fmath)