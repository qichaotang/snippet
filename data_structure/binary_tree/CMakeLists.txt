cmake_minimum_required(VERSION 3.9)
project(binary_tree)

include_directories("./include")

set(CMAKE_CXX_STANDARD 11)

file(GLOB binary_tree_src "./src/*.cpp" "./include/*.h")
add_library(binary_tree_core ${binary_tree_src})

add_executable(binary_tree ${binary_tree_src})
target_link_libraries(binary_tree binary_tree_core)
