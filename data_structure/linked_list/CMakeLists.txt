cmake_minimum_required(VERSION 3.9)
project(linked_list)

include_directories("./include")

set(CMAKE_CXX_STANDARD 11)

file(GLOB linked_list_src "./src/*.cpp" "./include/*.h")
add_library(linked_list_core ${linked_list_src})

add_executable(linked_list ${linked_list_src})
target_link_libraries(linked_list linked_list_core)
