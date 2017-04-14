#include <iostream>
#include "timer/timer.h"
#include "catch_main.cpp"
#include "timerTest.h"
#include "catch.hpp"

using namespace std;

SCENARIO("Test testFunction in timer.cpp")
{
	GIVEN("The testFunction function")
	{
		WHEN("Calling it with a string parameter for name")
		{
			string result = foo::testFunction("Jerry");
			THEN("We get back a greeting from Jerry")
			{
				REQUIRE(result == "Hello world from Jerry");
			}
		}
	}
}