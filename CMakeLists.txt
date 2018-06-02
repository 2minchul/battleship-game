cmake_minimum_required(VERSION 3.10)
project(battleship)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 11)

add_executable(battleship
        src/main.cpp
        src/BattleShipApp.cpp
        src/BattleShipApp.h
        src/pane/BattleShipMap.cpp
        src/pane/BattleShipMap.h
        src/pane/Pane.cpp
        src/pane/Pane.h
        src/pane/StatPane.cpp
        src/pane/StatPane.h src/GameManager.cpp src/GameManager.h)

target_link_libraries(battleship ${CURSES_LIBRARIES})