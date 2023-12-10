#include <iostream>
#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)
{
	double fah;
	fah = 9 * cel / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32) * 5 / 9;
	return cel;
}

