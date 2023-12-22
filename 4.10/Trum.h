#pragma once
#include "Transport.h"
class Trum : public Transport
{
	double electrRaskhod;
public:
	Trum(const string n, const string ft, double fr, int y, double pr, double e);
	void Print() const;
};