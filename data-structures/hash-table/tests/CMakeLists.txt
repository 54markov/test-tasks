cmake_minimum_required(VERSION 3.15)

project(tests C)

find_package(Cmocka REQUIRED)
message(STATUS "Using cmocka ${Cmocka_VERSION}")

set(src_destroy destroy.c)
set(src_add     add.c)
set(src_del     delete.c)

add_executable(test-destroy ${src_destroy})
add_executable(test-add     ${src_add})
add_executable(test-del     ${src_del})

foreach(_target test-destroy test-add test-del)
    target_link_libraries(${_target} hash-table-lib ${CMOCKA_LIBRARY})
    target_compile_options(${_target} PRIVATE "-Wall" "-Werror" "-O3")
    target_include_directories(${_target} PRIVATE ../include)
    add_test(NAME ${_target} COMMAND ${_target})
endforeach()
