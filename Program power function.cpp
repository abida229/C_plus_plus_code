#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double base, exponent, result;
	
	cout<<"Enter base value ";
	cin>>base;
	cout<<"Enter exponent value ";
	cin>>exponent;
	result = pow(base, exponent);
	
	cout << base << "^" << exponent << " = " << result;
	
	return 0;
}
