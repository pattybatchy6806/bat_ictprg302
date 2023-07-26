cmake_minimum_required(VERSION 3.24)
project(bat_ictprg302)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(./libs/SFML-2.6.0)

add_executable(bat_ictprg302 main.cpp)

target_link_libraries(bat_ictprg302 sfml-graphics sfml-system sfml-window)
