cmake_minimum_required(VERSION 3.22)
project(CLionProjects C)

set(CMAKE_C_STANDARD 99)



add_executable(main main.c)
add_executable(Day01 chapter06/Day01.c chapter06/Day02.c)
add_executable(Day02 chapter06/Day02.c)
add_executable(Day03 chapter05/Day03.c)
add_executable(Day04 chapter05/Day04.c)
add_executable(Day05 chapter05/Day05.c)
add_executable(Day06 chapter05/Day06.c)
add_executable(Day07 chapter05/Day07.c)
add_executable(Day08 chapter05/Day08.c)
add_executable(Day09 chapter05/Day09.c)

add_executable(Day10 chapter05/Day10.c)
