cmake_minimum_required(VERSION 3.5)

project(03.02-strings)
add_compile_options(-Wall -Wextra -Werror -std=c++1z)

add_executable(03.02-read 03.02-read.cpp)

add_executable(03.04-string-compare 03.04-string-compare.cpp)

add_executable(03.05-concatenate 03.05-concatenate.cpp)

add_executable(03.06-string-to-X 03.06-string-to-X.cpp)
add_test(NAME 03.06-string-to-X COMMAND $<TARGET_FILE:03.06-string-to-X>)

add_executable(03.08-string-to-X-reprise 03.08-string-to-X-reprise.cpp)
add_test(NAME 03.08-string-to-X-reprise COMMAND $<TARGET_FILE:03.08-string-to-X-reprise>)

add_executable(03.10-remove-punctuation 03.10-remove-punctuation.cpp)
