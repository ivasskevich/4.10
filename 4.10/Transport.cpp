#include "Transport.h"

Transport::Transport(const string& n, const string& ft, double fr, int y, double pr) : name(n), fuelType(ft), fuelRaskhod(fr), year(y), price(pr) {}

void Transport::Print() const
{
	cout << "Name: " << name << endl;
	cout << "Fuel Type: " << fuelType << endl;
	cout << "Fuel Raskhod: " << fuelRaskhod << " l/100 km" << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << " $" << endl;
}

string Transport::getFuelType() const
{
	return fuelType;
}

void Transport::setFuelType(const string fuelT)
{
	fuelType = fuelT;
}

double Transport::getFuelRaskhod() const
{
	return fuelRaskhod;
}

void Transport::setFuelRaskhod(const double fuelR)
{
	fuelRaskhod = fuelR;
}

double Transport::getPrice() const
{
	return price;
}

void Transport::setPrice(const double pri)
{
	price = pri;
}