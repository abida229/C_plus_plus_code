#include <iostream>
using namespace std;
int sum(int f, int g) 
{
int result;
result =  f- g; 
return (result);
}
int main () {
// local variable declaration:
int f ;
cout <<"Enter 1st value: ";
cin>>f;
int g;
cout<<"Enter 2nd value: ";
cin>>g;
int result;
// calling a function to add the values.
result = sum(f, g);
cout << "remaining valuue is  :" << result << endl;

return 0;
}
