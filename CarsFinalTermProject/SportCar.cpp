#include <iostream>
#include <iomanip>
#include "SportCar.h"

using namespace std;

namespace cs
{
	SportCar::SportCar()
	{
		//Complete Code
		noOfPassengers_ = 1;

	}

	SportCar::SportCar(int maxSpeed, int noOfPass) : Car(maxSpeed)
	{
		//Complete Code
		noOfPassengers_ = noOfPass;
	}

	void SportCar::accelerate()
	{
		//Complete Code
		speed(speed() + 40);
	}

	void SportCar::brake()
	{
		//Complete Code
		speed(speed() - 10);
	}

	std::ostream& SportCar::display(std::ostream& os) const
	{
		os << "This sport car is carrying " << noOfPassengers_ << " passengers ";
		if (speed() > 0)
		{
			os << "and is traveling at a speed of " << speed() << " km/h.";
		}
		else
		{
			os << "and is parked.";
		}
		return os;
	}
}