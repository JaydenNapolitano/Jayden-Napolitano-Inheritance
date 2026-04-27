#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string m, int y, int d) : Vehicle(m, y) {
	numDoors = d;
}

void Car::setNumDoors(int d) {
	numDoors = d;
}

int Car::getNumDoors() const {
	return numDoors;
}

void Car::displayInfo() const {
	Vehicle::displayInfo(); 
	cout << "Number of Doors: " << numDoors << endl;
}