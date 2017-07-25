#include <iostream>
#include "core/timer_lib_core.hpp"

using namespace std;

string foo::testFunction(const string& myname) {
	cout << "foo: Hello world from\n" << std::endl;
	return "Hello world from " + myname;
}