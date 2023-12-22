#pragma once
#include "Transport.h"
class Plane : public Transport
{
	double speed;
	bool businessClass;
public:
	Plane(const string& n, const string& ft, double fr, int y, double pr, double s, bool b);
	void Print() const;
};