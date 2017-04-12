project(timerTest)
cmake_minimum_required(VERSION 2.8.12)

add_executable(timerTest timerTest.cpp )
target_link_libraries(timerTest ${CONAN_LIBS})