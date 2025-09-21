cmake_minimum_required(VERSION 3.12)
project(lab01)

set(CMAKE_CXX_STANDARD 17)

add_executable(program1 main.cpp lr1_v1.cpp)

# настройка GTest 
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)


include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# тесты
add_executable(test_program test.cpp lr1_v1.cpp)
target_link_libraries(test_program gtest gtest_main)
