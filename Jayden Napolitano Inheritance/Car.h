#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
	int numDoors;

public:
	Car(string m = "", int y = 0, int d = 0);

	void setNumDoors(int d);
	int getNumDoors() const;

	void displayInfo() const;
};

#endif 