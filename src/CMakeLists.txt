project(TimerLibImpl)
cmake_minimum_required(VERSION 3.5)

add_executable(timer_lib_exe 
	core/main.cpp 
	)

target_link_libraries(timer_lib_exe 
	CONAN_PKG::Boost
	)

