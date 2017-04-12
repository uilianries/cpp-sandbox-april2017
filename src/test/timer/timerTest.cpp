#include <iostream>
#include "../../../src/main/timer/timer.h"
#include "../testMain.cpp"
#include "timerTest.h"
#define CATCH_CONFIG_MAIN
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