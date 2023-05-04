cmake_minimum_required(VERSION 3.25)
project(Queues C)

set(CMAKE_C_STANDARD 23)

add_executable(Queues main.c queue.h queue.c)
