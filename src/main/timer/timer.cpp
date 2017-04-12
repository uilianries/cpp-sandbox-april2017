#include <iostream>
#include "main/timer/timer.h"

using namespace std;

string foo::testFunction(const string& myname) {
	cout << "foo: Hello world from\n" << myname;
	return "Hello world from " + myname;
}