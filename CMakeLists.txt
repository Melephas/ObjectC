cmake_minimum_required(VERSION 3.27)
project(object_style_c C)

set(CMAKE_C_STANDARD 17)

add_subdirectory(Base)

add_executable(object_style_c main.c)

target_link_libraries(object_style_c Base)
