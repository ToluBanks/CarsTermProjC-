#include <cstring>
#include "PickupTruck.h"

using namespace std;

namespace cs
{
	PickupTruck::PickupTruck()
	{
		//Complete Code
		loadAmount_ = 0;
		speed();
		strcpy_s(loadedMaterial_, "");
	}

	bool PickupTruck::isEmpty() const
	{
		//Complete Code
		if (loadAmount_ == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	void PickupTruck::load(const char* loadedMaterial, int loadAmount)
	{
		//Complete Code
		strcpy_s(loadedMaterial_, loadedMaterial);
		loadAmount_ = loadAmount;
	}

	void PickupTruck::accelerate()
	{
		//Complete Code
		speed(speed() + 20);

	}

	void PickupTruck::brake()
	{
		//Complete Code
		speed(speed() - 5);
	}

	void PickupTruck::unload()
	{
		//Complete Code
		loadAmount_ = 0;
	}

	std::ostream& PickupTruck::display(std::ostream& os) const
	{
		//Complete Code

		if (isEmpty()) {
			os << "This pickup truck is not carrying any load, ";
		}
		else {
			os << "This pickup truck is carrying " << loadAmount_ << " kgs of " << loadedMaterial_ << ", ";
		}


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