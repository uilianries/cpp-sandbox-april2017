project(AgentServiceMaster)
cmake_minimum_required(VERSION 3.5)

include(${PROJECT_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
add_subdirectory(test)

add_library(timer_lib 
	INTERFACE
	)

target_include_directories(timer_lib 
	INTERFACE 
	${PROJECT_SOURCE_DIR}/include
	)

include(CTest)