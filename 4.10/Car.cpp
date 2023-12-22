#include "Car.h"

Car::Car(const string n, const string ft, double fr, int y, double pr, const string c, int p) :Transport(n, ft, fr, y, pr)
{
	color = c;
	power = p;
}

void Car::Print() const
{
	Transport::Print();
	cout << "Color: " << color << endl;
	cout << "Power: " << power << "hp" << endl;
}