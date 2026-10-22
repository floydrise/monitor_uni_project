cmake_minimum_required(VERSION 4.2)
project(MonitorProject)

set(CMAKE_CXX_STANDARD 23)

add_executable(MonitorProject src/main.cpp
        include/monitor.h
        src/monitor.cpp
        include/negative_value_error.h
        src/negative_value_error.cpp
        include/empty_value_error.h
        src/empty_value_error.cpp
)

add_executable(vectors_task
        src/vectors_task.cpp
        src/monitor.cpp
        src/negative_value_error.cpp
        src/empty_value_error.cpp
)