cmake_minimum_required(VERSION 3.11)
project(TusurTask2)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
include_directories(classes)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_subdirectory(classes)
target_link_libraries(${PROJECT_NAME} classes)