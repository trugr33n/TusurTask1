cmake_minimum_required(VERSION 3.13)
project(classes)
set(CMAKE_CXX_STANDART 14)

set(SOURCE_LIBS Cart.cpp
                ProductList.cpp
                Product.cpp)
add_library(classes ${SOURCE_LIBS})
