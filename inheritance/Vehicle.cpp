#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle():manufacturer("Unknown"), yearBuilt(0){}  //This is the constructor's initializer list

Vehicle::Vehicle(string manufacturer, int year){
	this->manufacturer = manufacturer;
	this->yearBuilt = year;
}

string Vehicle::getManufacturer() const{
	return manufacturer;
}

int Vehicle::getYearBuilt(int year){
	return yearBuilt;
}

void Vehicle::setManufacturer(string manufacturer) {
	this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int year) {
	this->yearBuilt = year;
}

void Vehicle::displayInfo() const{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
