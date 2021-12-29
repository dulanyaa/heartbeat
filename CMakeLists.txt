cmake_minimum_required(VERSION 3.21)
project(heartbeat)

set(CMAKE_CXX_STANDARD 14)

add_executable(heartbeat main.cpp Narrative.cpp Narrative.h Passage.cpp Passage.h Choice.cpp Choice.h)
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(heartbeat sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
