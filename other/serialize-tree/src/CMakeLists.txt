cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(serialize-tree main.cpp)

add_subdirectory(node)
add_subdirectory(tree)
add_subdirectory(parser)
add_subdirectory(exception)

target_link_libraries(serialize-tree
                      tree-lib
                      parser-lib
                      node-lib
                      exception-lib)

