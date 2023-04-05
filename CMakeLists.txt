cmake_minimum_required(VERSION 3.24)
project(c_first_steps C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_first_steps
        hello_world.c)
