cmake_minimum_required(VERSION 3.15)

set(lib_name binary-search-tree-lib)
set(lib_srcs binary-search-tree.cpp)

add_library(${lib_name} STATIC ${lib_srcs})

target_include_directories(${lib_name} PRIVATE ../include)
target_compile_options(${lib_name} PRIVATE "-Wall" "-Werror" "-O3")
target_compile_features(${lib_name} PRIVATE cxx_std_20)
