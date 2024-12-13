#include<iostream>
using namespace std;
void z (int &x, int &y)
{

   int c=0;           
   c= x;
   x=y;
   y=c;
   return ;
}



void z (int &x, int &y);

int main()
{
	int a=10;
	int b=20;
	cout<<"Value before swape of a: "<< a << endl; 
	cout<<"Value before swape of b: "<< b << endl;
	
	z(a,b);
	
	cout<<"value after swap of a: " << a <<endl;
	cout<<"value after swap of b: " << b <<endl;
	return 0;
}
