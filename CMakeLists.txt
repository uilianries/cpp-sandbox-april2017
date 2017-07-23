project(AgentMaster)
cmake_minimum_required(VERSION 3.5)

include(${PROJECT_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)

