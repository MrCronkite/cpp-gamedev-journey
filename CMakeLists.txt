cmake_minimum_required(VERSION 3.20)
project(cpp_gamedev_journey LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

function(enable_warnings target)
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4 /permissive-)
    elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endfunction()

add_executable(hello_cpp exercises/01-hello-cpp/main.cpp)
enable_warnings(hello_cpp)

add_executable(warnings_practice exercises/02-warnings/main.cpp)
enable_warnings(warnings_practice)

# Упражнение 3: библиотека, программа и тест.
add_library(score_library exercises/03-cmake/score.cpp)
target_include_directories(score_library PUBLIC exercises/03-cmake)
enable_warnings(score_library)

add_executable(score_game exercises/03-cmake/main.cpp)
target_link_libraries(score_game PRIVATE score_library)
enable_warnings(score_game)

enable_testing()
add_executable(score_test exercises/03-cmake/score_test.cpp)
target_link_libraries(score_test PRIVATE score_library)
enable_warnings(score_test)
add_test(NAME score_test COMMAND score_test)

# Отдельный файл для самостоятельных опытов.
add_executable(main_hello EXCLUDE_FROM_ALL exercises/01-hello-cpp/main_hello.cpp)
enable_warnings(main_hello)
