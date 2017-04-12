project(testMain)
cmake_minimum_required(VERSION 2.8.12)

add_executable(testMain testMain.cpp)
target_link_libraries(testMain ${CONAN_LIBS})


