#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck: public Vehicle {
private:
		double towingCapacity;

public: 
	Truck(string m = "", int y = 0, double t = 0);

	void setTowingCapacity(double t);
	double getTowingCapacity() const;

	void displayInfo() const;
};

#endif
