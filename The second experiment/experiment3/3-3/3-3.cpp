#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius " << " Fahrenheit " << "|" << " Fahrenheit " << " Celsius" << endl;
	for (double a = 40.0, b = 120.0; a != 30.0 && b != 20.0; a--, b = b - 10)
	{
		cout << fixed << setprecision(1) << a << '\t' << fixed << setprecision(1) << celsius_to_fah(a) << '\t' << "|" 
			<< '\t' << fixed << setprecision(1) << b << '\t' << fixed << setprecision(2) << fahrenheit_to_cels(b) << endl;
	}
	return 0;
}



