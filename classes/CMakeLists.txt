cmake_minimum_required(VERSION 3.11)
project(classes)
set(CMAKE_CXX_STANDARD 17)

set(SOURCE_CLASSES Creature.hpp
        EarthElemental.cpp
        EarthElemental.hpp
        Crossbowman.cpp
        Crossbowman.hpp)
add_library(${PROJECT_NAME} ${SOURCE_CLASSES})