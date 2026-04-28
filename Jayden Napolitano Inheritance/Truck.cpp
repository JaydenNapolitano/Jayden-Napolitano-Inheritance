#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(string m, int y, double t) :Vehicle(m, y) {
	towingCapacity = t;
}

void Truck::setTowingCapacity(double t) {
	towingCapacity = t;
}

double Truck::getTowingCapacity() const {
	return towingCapacity;
}

void Truck::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}