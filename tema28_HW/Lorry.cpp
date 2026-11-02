#include "Lorry.h"

Lorry::Lorry()
{
    loadCapacity = 0;
}

Lorry::Lorry(string carMake, string color, float capacity, float fuelRate, float loadCapacity)
    :PassengerCar (carMake,color,capacity,fuelRate)
{
    this->loadCapacity = loadCapacity;
}

float Lorry::getLoadCapacity() const
{
    return loadCapacity;
}

void Lorry::calculateCost(float fuelRate, float loadCapacity, float price) const
{
    float result = ((fuelRate / 100) * 100) / loadCapacity;
    cout << "distance: " << result << endl;
}

void Lorry::showInfo() const
{
    PassengerCar::showInfo();
    cout << "Payload capacity: " << loadCapacity << endl;
}
