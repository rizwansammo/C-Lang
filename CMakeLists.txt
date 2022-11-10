cmake_minimum_required(VERSION 3.23)
project(C_Lang C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Lang main.c )
add_executable(ClockMath ClockMath.c)
add_executable(ASCIIValue ASCIIValue.c)
add_executable(getFunc getFunc.c)
add_executable(If-Else If-Else.c)