#pragma once
#include <iostream>
#include <string>
using namespace std;
class PassengerCar
{
protected:
	string carMake;
	string color;
	float capacity;
	float fuelRate;
public:
	PassengerCar();
	PassengerCar(string carMake,string color, float capacity, float fuelRate);

	string getCarMake()const;
	string gerColor()const;
	float getCapacity()const;
	float getFuelRate()const;

	void showInfo()const;
	void distance(float capacity,float fuelRate);
};

