cmake_minimum_required(VERSION 3.9)
project(class_register)

include_directories("./include")

set(CMAKE_CXX_STANDARD 11)

file(GLOB class_register_src "./src/*.cpp" "./include/*.h")
add_library(class_register_core ${class_register_src})

add_executable(class_register ${class_register_src})
target_link_libraries(class_register class_register_core)
