#include <iostream>
#include <cstring>
#include "Driver.h"

using namespace std;

namespace cs
{
	Driver::Driver(const char* name, Car& C) :car_(C)
	{
		//Complete Code
		strcpy_s(name_, name);
		car_ = C;
	}

	void Driver::drive()
	{
		//Complete Code
		car_.accelerate();
		car_.brake();
		showStatus();
	}

	void Driver::stop()
	{
		//Complete Code
		while (car_.speed() > 0) {
			car_.brake();
		}
		if (car_.speed() <= 0) {
			showStatus();
		}
	}

	void Driver::showStatus()
	{
		//Complete Code
		cout << name_ << " is driving this car" << endl;
		cout << car_ << endl;
	}
}