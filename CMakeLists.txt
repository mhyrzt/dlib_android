cmake_minimum_required(VERSION 2.8.12)
project(dlib_android_compile)

# Adding dlib to project
add_subdirectory(./dlib dlib_build)

# Adding my own functions
add_library(
    dlib_utils
    dlib_utils.hpp
    dlib_utils.cpp
)


target_link_libraries(dlib_utils dlib::dlib)
