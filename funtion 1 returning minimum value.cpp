#include <iostream>
using namespace std; 
// function declaration
int mini(int num1, int num2); 
int main () {
// local variable declaration:

int c ;
cout<<"Enter 1st value:";
cin>>c;
int  d ;
cout<<"Enter 2nd value:";
cin>>d;
int ret;
// calling a function to get max value.
ret  =mini(c, d);
cout << "Minimum value is : " << ret << endl;
return 0;
} 
// function returning the max between two numbers
int mini(int num1, int num2) 
{
// local variable declaration
int result;
if (num1 < num2)
result = num1;
else
result = num2;
return result; 
}
