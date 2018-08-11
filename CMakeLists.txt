cmake_minimum_required(VERSION 3.12)
project(c11test C)

set(CMAKE_C_STANDARD 11)

add_executable(c11test main.c support.c multyArrayDemo.c pointDemo.c strDemo.c structDemo.c unionDemo.c bitDomainDemo.c)