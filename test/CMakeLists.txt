add_subdirectory(catch_main)

add_library(timer_lib_tests 
	core/timer_lib_core_test.cpp
	)

target_link_libraries(timer_lib_tests 
	timer_lib
	)

# https://cmake.org/cmake/help/v3.4/command/add_test.html 
# add_test(<name> <command> [<arg>...])
enable_testing()
add_test(NAME timer_lib_tests COMMAND timer_lib_tests)
