cmake_minimum_required(VERSION 3.16)
project(Containers)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES multimaps.cpp)
set(RESOURCE_FILES illiad.txt)

add_executable(Containers vector.cpp)
add_executable(Array array.cpp)
add_executable(List lists.cpp)
add_executable(StacksAndQueue stack.cpp)
add_executable(Maps maps.cpp)
add_executable(Multimaps ${SOURCE_FILES} )
add_executable(Sets sets.cpp)
add_executable(Project circular_buffer.hpp test.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${RESOURCE_FILES}
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

