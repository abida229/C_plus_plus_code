#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double base, exponent, result;
	
	base b;
	cout<< "Enter base value";
	cin>> b;
	exponent e;
	cout<< "Enter exponent value";
	cin>> e;
	result = pow(base, exponent);
	
	cout << base << "^" << exponent << " = " << result;
	
	return 0;
}
