#pragma once
#include "PassengerCar.h"
class Lorry :
    public PassengerCar
{
protected:
    float loadCapacity;
public:
    Lorry();
    Lorry(string carMake, string color, float capacity, float fuelRate,float loadCapacity);

    float getLoadCapacity()const;

    void calculateCost(float fuelRate,float loadCapacity,float price)const;
    void showInfo()const;
};

