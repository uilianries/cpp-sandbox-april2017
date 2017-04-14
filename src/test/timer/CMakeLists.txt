project(MasterProjects)
cmake_minimum_required(VERSION 2.8.12)

include_directories(${PROJECT_SOURCE_DIR}/../../main)
include(${PROJECT_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(timerTest timerTest.cpp timerTest.h)
target_link_libraries(timerTest timer ${CONAN_LIBS})