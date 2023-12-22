#pragma once
#include "Transport.h"
class Ship : public Transport
{
	string type;
	int passCapacity;
public:
	Ship(const string n, const string ft, double fr, int y, double pr, const string t, int pc);
	void Print() const;
};