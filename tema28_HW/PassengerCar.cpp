#include "PassengerCar.h"

PassengerCar::PassengerCar()
{
    carMake = "undefined";
    color = "undefined";
    capacity = 0;
    fuelRate = 0;
}

PassengerCar::PassengerCar(string carMake, string color, float capacity, float fuelRate)
{
    this->carMake = carMake;
    this->color = color;
    this->capacity = capacity;
    this->fuelRate = fuelRate;
}

string PassengerCar::getCarMake() const
{
    return carMake;
}

string PassengerCar::gerColor() const
{
    return color;
}

float PassengerCar::getCapacity() const
{
    return capacity;
}

float PassengerCar::getFuelRate() const
{
    return fuelRate;
}

void PassengerCar::showInfo() const
{
    cout << "Car make: " << carMake << endl;
    cout << "Color: " << color << endl;
    cout << "Capacity: " << capacity << endl;
    cout << "Fuel rate for 100 km: " << fuelRate << endl;
}

void PassengerCar::distance(float capacity, float fuelRate)
{
    float result = (capacity / fuelRate) * 100;
    cout << "With a full tank, the car can travel: " << result;
}
