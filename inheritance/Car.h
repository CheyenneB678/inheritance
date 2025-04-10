#pragma once

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"


class Car:public Vehicle{
private:
	int numberOfDoors;

public:
	Car();
	Car(string manufacturer, int year, int doors);

	int getNumberOfDoors() const;
	void setNumberOfDoors(int doors);

	void displayInfo() const override;   //this function is intended to override a virtual function with the same signature in a base class
};

#endif