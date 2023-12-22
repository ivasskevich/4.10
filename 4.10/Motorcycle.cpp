#include "Motorcycle.h"

Motorcycle::Motorcycle(const string n, const string& ft, double fr, int y, double pr, double m) :Transport(n, ft, fr, y, pr)
{
	motCapacity = m;
}

void Motorcycle::Print() const
{
	Transport::Print();
	cout << "Motor Capacity: " << motCapacity << " l" << endl;
}