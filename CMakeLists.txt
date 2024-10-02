cmake_minimum_required(VERSION 3.13)
project(TusurTask1)
set(CMAKE_CXX_STANDART 14)

set(SOURCE_FILES main.cpp)
include_directories(classes)


add_executable(main ${SOURCE_FILES})
add_subdirectory(classes)
target_link_libraries(main classes)
