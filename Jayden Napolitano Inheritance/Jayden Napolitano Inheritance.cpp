// Jayden Napolitano 
// CIS 1202
// 4/24/2026

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
	string manufacturer;
	int year;
	int doors;
	double towing;


	cout << "Vehicle Program:\n";

	cout << "\nVehicle: \n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;

	Vehicle v(manufacturer, year);
	cout << "Vehicle Information: \n";
	v.displayInfo();

	cin.ignore();

	cout << "\nCar: ";
	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;

	Car c(manufacturer, year, doors);
	cout << "Vehicle Information: \n";
	c.displayInfo();

	cin.ignore();

	cout << "\nTruck: ";
	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towing;

	Truck t(manufacturer, year, towing);
	cout << "Vehicle Information: \n";
	t.displayInfo();


	return 0;
}

