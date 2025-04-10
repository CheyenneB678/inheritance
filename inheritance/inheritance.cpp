/**************
*Cheyenne Buchert
*CIS 1202
*Inheritance
*4/10/2025
***************/

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	string manufacturer;
	int year, doors, towing;

	cout << "Vehicle Program\n\n\n";

	//Vehicle
	cout << "Vehicle Info/nEnter manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cin.ignore();  //flush newline

	Vehicle myVehicle(manufacturer, year);
	cout << "\nVehicle Information:\n";
	myVehicle.displayInfo();


	//Car
	cout << "\nCar Info\nEnter manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << "Enter number of doors: ";
	cin >> doors;
	cin.ignore();

	Car myCar(manufacturer, year, doors);
	cout << "\nCar Information:\n";
	myCar.displayInfo();

	//Truck
	cout << "\nTruck Info\nEnter manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << "Enter towing capacity: ";
	cin >> towing;

	Truck myTruck(manufacturer, year, towing);
	cout << "\nTruck Information:\n";
	myTruck.displayInfo();

	cout << "Press enter to exit . . .";
	cin.ignore();
	cin.get();
	return 0;
}