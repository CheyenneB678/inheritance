#pragma once

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck:public Vehicle{
private:
	int towingCapacity;

public:
	Truck();
	Truck(string manufacturer, int year, int towingCapacity);

	int getTowingCapacity() const;
	void setTowingCapacity(int capacity);

	void displayInfo() const override;   //this function is intended to override a virtual function with the same signature in a base class
};

#endif