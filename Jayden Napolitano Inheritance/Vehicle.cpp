#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string m, int y) {
	manufacturer = m;
	yearBuilt = y;
}

void Vehicle::setManufacturer(string m) {
	manufacturer = m;
}

string Vehicle::getManufacturer() const {
	return manufacturer;
}

void Vehicle::setYearBuilt(int y) {
	yearBuilt = y;
}

int Vehicle::getYearBuilt() const {
	return yearBuilt;
}

void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
