#include <iostream>
using namespace std;


// Function prototypes 
int feet(int); 
int remain_inches(int); 


int main() { 
int inches; // Number of inches 
cout << "Enter number of inches to convert:"; 
cin >> inches; 
cout << "Result is " << feet(inches) 
<< " feet " << remain_inches(inches) 
<< " inches" << endl; 
return 0; 
} 
int feet(int input_inches) { 
return input_inches / 12; } 
int remain_inches(int input_inches) { 
return input_inches % 12; }
