#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "Plane.h"
#include "Trum.h"
#include "Motorcycle.h"
using namespace std;

int main() {
    Transport* ptr = nullptr;
    int a;

    cout << "Choose a type of transport:\n1. Car\n2. Ship\n3. Plane\n4. Trum\n5. Motorcycle\n";
    cout << "Enter your choice: ";
    cin >> a;

    switch (a)
    {
    case 1:
        ptr = new Car("Audi A5", "Gasoline", 2.5, 2023, 25000, "Red", 280);
        break;
    case 2:
        ptr = new Ship("Carrebeans", "Diesel", 200.0, 2005, 50000000, "Ship", 5200);
        break;
    case 3:
        ptr = new Plane("Jetlac A320", "LY571", 310.0, 2018, 700000000, 2430, true);
        break;
    case 4:
        ptr = new Trum("Odesa", "Electricity", 0, 1970, 29700, 15.0);
        break;
    case 5:
        ptr = new Motorcycle("Ducatti 458", "Gasoline", 5.1, 2021, 65420, 3.6);
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }
    ptr->setFuelType("Euro 6");
    ptr->setFuelRaskhod(11.2);
    ptr->setPrice(165000);
    ptr->Print();

    delete ptr;
}