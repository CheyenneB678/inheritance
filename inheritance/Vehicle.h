#pragma once

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;


class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle();
	Vehicle(string manufacturer, int year);

	string getManufacturer() const;
	int getYearBuilt(int year);

	virtual void displayInfo() const;
};

#endif