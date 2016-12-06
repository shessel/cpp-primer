cmake_minimum_required(VERSION 3.5)

project(16.1-definition)
add_compile_options(-Wall -Wextra -Werror -std=c++1z)

add_executable(16.2-compare 16.2-compare.cpp)
add_test(NAME 16.2-compare-test COMMAND $<TARGET_FILE:16.2-compare>)

add_executable(16.4-find 16.4-find.cpp)
add_test(NAME 16.4-find-test COMMAND $<TARGET_FILE:16.4-find>)
