#pragma once
#include "Transport.h"
class Car : public Transport
{
	string color;
	int power;
public:
	Car(const string n, const string ft, double fr, int y, double pr, const string c, int p);
	void Print() const;
};

