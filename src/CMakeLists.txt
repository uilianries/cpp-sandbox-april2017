


add_library(timer_lib_impl 
	core/timer_lib_core.cpp
	)

target_link_libraries(timer_lib_impl 
	timer_lib 
	${CONAN_LIBS}
	)
