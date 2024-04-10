cmake_minimum_required(VERSION 3.27)
project(Base C)

set(CMAKE_C_STANDARD 17)

add_library(
    Base STATIC
    Base.h
    IO/IO.h
    IO/BinaryWriter/BinaryWriter.h
    IO/BinaryWriter/BinaryWriter.c
    Collections/Collections.h
    Collections/Array/Array.c
    Collections/Array/Array.h
    Util.h
)

target_include_directories(
    Base
    PUBLIC .
    PUBLIC IO
    PUBLIC Collections
)