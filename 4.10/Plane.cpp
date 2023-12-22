#include "Plane.h"

Plane::Plane(const string& n, const string& ft, double fr, int y, double pr, double s, bool b) :Transport(n, ft, fr, y, pr)
{
	speed = s;
	businessClass = b;
}

void Plane::Print() const
{
	Transport::Print();
	cout << "Speed: " << speed << " km/h" << endl;
	cout << "Business Class: " << (businessClass ? "Yes" : "No") << endl;
}