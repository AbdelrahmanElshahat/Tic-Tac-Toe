cmake_minimum_required(VERSION 3.10)
project(Tic-Tac-Toe)

set(CMAKE_CXX_STANDARD 23)

# Include header files directory
include_directories(include)

# Explicitly list source files to avoid duplicate definitions
set(SOURCES
    src/Game.cpp
    src/HumanPlayer.cpp
    src/AiPlayer.cpp
    src/main.cpp
    src/Player.cpp
)

# Create executable with specified source files
add_executable(${PROJECT_NAME} ${SOURCES})