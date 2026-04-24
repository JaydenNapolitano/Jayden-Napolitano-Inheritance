#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(string m = "", int y = 0);

	void setManufacturer(string m);
	string getManufacturer() const;

	void setYearBuilt(int y);
	int getYearBuilt() const;

	void displayInfo() const;
};

#endif