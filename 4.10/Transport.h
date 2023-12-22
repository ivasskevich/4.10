#pragma once
#include <iostream>
#include <string>
using namespace std;
class Transport
{
protected:
	string name;
	string fuelType;
	double fuelRaskhod;
	int year;
	double price;
public:
	Transport() = default;
	Transport(const string& n, const string& ft, double fr, int y, double pr);
	virtual void Print() const;
	virtual string getFuelType() const;
	virtual void setFuelType(const string fuelT);
	virtual double getFuelRaskhod() const;
	virtual void setFuelRaskhod(const double fuelR);
	virtual double getPrice() const;
	virtual void setPrice(const double pri);
};