#pragma once
#include "Transport.h"
class Motorcycle : public Transport
{
	double motCapacity;
public:
	Motorcycle(const string n, const string& ft, double fr, int y, double pr, double m);
	void Print() const;
};