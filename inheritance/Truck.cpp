#include "Truck.h"
#include <iostream>

Truck::Truck():Vehicle(), towingCapacity(0){}

Truck::Truck(string manufacturer, int year, int capacity):Vehicle(manufacturer, year){
	this->towingCapacity = capacity;

}

int Truck::getTowingCapacity() const{
	return towingCapacity;
}

void Truck::setTowingCapacity(int capacity){
	towingCapacity = capacity;
}

void Truck::displayInfo() const{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << "lbs" << endl;
}