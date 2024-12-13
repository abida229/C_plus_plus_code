#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int divisor,dividend,quotient,remainder;
	cout<<"Enter dividend:";
	cin>>dividend;
	cout<<"Enter divisor:";
	cin>>divisor;
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	cout<<"Quotient ="<<quotient<<endl;
	cout<<"Remainder ="<<remainder;
	
	return 0;
}
