#include "Trum.h"

Trum::Trum(const string n, const string ft, double fr, int y, double pr, double e) :Transport(n, ft, fr, y, pr)
{
	electrRaskhod = e;
}

void Trum::Print() const
{
	Transport::Print();
	cout << "Electricity Raskhod: " << electrRaskhod << " kWh/km" << endl;
}