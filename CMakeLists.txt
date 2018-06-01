cmake_minimum_required(VERSION 3.10)
project(battleship)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 11)

add_executable(battleship
        src/main.cpp
        src/BattleShipApp.cpp
        src/BattleShipApp.h
        src/BattleShipMap.cpp
        src/BattleShipMap.h
        src/Pane.cpp
        src/Pane.h
        src/StatPane.cpp
        src/StatPane.h)

target_link_libraries(battleship ${CURSES_LIBRARIES})