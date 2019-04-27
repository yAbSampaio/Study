cmake_minimum_required(VERSION 3.10)
project(fgal)

message("compling library")

include_directories("include")

add_library(fmath "src/fmath.cpp")

add_executable(goku "src/main.cpp")
target_link_libraries(goku fmath)