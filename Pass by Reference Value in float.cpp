#include <iostream>
using namespace std;

// Function  for call by reference
void swap(float &x, float &y);

int main()
{
   float a, b;
   
   cout << "Enter 2 numbers: " << endl;
   cin >> a >> b;
   if(a>b) 
     swap(a,b); 
                
    else;           

   
   cout << "Sorted numbers: ";
   cout << a << " " << b << endl;
   return 0;
}



void swap(float &x, float &y)

{
   float temp;

   temp = x;
   x = y;
   y = temp;
}
