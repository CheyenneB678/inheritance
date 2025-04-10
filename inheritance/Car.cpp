#include "Car.h"
#include <iostream>

Car::Car():Vehicle(), numberOfDoors(0){}  //initializer list

Car::Car(string manufacturer, int year, int doors){
	this->numberOfDoors = doors;
}

int Car::getNumberOfDoors() const{
	return numberOfDoors;
}

void Car::setNumberOfDoors(int doors){
	numberOfDoors = doors;
}

void Car::displayInfo() const{
	Vehicle::displayInfo();
	cout << "Number Of Doors: " << numberOfDoors << endl;
}