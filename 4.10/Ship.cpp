#include "Ship.h"

Ship::Ship(const string n, const string ft, double fr, int y, double pr, const string t, int pc) :Transport(n, ft, fr, y, pr)
{
	type = t;
	passCapacity = pc;
}

void Ship::Print() const
{
	Transport::Print();
	cout << "Type: " << type << endl;
	cout << "Passenger Capacity: " << passCapacity << endl;
}