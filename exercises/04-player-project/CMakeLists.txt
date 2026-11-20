cmake_minimum_required(VERSION 3.20)

project(PlayerProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(player STATIC player.cpp)

target_include_directories(player PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(player_app main.cpp)

target_link_libraries(player_app PRIVATE player)