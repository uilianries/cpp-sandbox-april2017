project(MyTimer)
cmake_minimum_required(VERSION 2.8.12)

add_executable(timer timer.cpp timer.h)
target_link_libraries(timer ${CONAN_LIBS})