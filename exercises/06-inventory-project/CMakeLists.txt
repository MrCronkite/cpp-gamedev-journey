cmake_minimum_required(VERSION 3.20)

project(InventoryProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(inventory_lib STATIC
    src/item.cpp
    src/inventory.cpp
)

target_include_directories(inventory_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(inventory_app
    src/main.cpp
)

target_link_libraries(inventory_app PRIVATE
    inventory_lib
)

if(MSVC)
    target_compile_options(inventory_lib PRIVATE /W4 /permissive-)
    target_compile_options(inventory_app PRIVATE /W4 /permissive-)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(inventory_lib PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(inventory_app PRIVATE -Wall -Wextra -Wpedantic)
endif()

enable_testing()

add_executable(inventory_test
    tests/inventory_test.cpp
)

target_link_libraries(inventory_test PRIVATE
    inventory_lib
)

add_test(
    NAME inventory_test
    COMMAND inventory_test
)