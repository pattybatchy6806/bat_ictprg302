cmake_minimum_required(VERSION 3.24)
project(bat_ictprg302)

set(CMAKE_CXX_STANDARD 11)

include_directories(./libs/SFML-2.5.1/include)
include_directories(./libs/SFML-2.5.1/extlibs/headers)
include_directories(./libs/SFML-2.5.1/extlibs/headers/freetype2)

add_subdirectory(./libs/SFML-2.5.1)

link_directories(./libs/SFML-2.5.1/extlibs/libs-osx)

add_executable(bat_ictprg302 main.cpp sprite.hpp)

target_link_libraries(bat_ictprg302 sfml-graphics)
