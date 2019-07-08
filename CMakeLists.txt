cmake_minimum_required(VERSION 3.13)
project(leetcode-c C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode-c src/main.c src/sort_an_array.c src/univalued_binary_tree.c src/binary_string_with_substrings_representing_1_to_N.c src/binary_search_tree_to_greater_sum_tree.c)