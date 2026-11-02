#include "PassengerCar.h"
#include "Lorry.h"

int main()
{
    PassengerCar a("Toyota", "Black", 35, 10);
    a.showInfo();
    a.distance(35,10);

    cout << endl;

    Lorry b("Lada", "Brown", 50, 12, 20);
    b.showInfo();
    b.calculateCost(12,10,300);
}