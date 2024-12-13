# include <iostream>
using namespace std;
int main()
{
	int a=2, b=3, y=4, x=12, z=15;
	
	a*=b;                       //a=a*b;
	y/=z;                       //y=y/z;
	x+=y;                       //x=x+y;
	z-=x;                      //z=z-x;
	b%=x;                      //b=b%x;
	
	cout<<a<<endl;
	cout<<y<<endl;
	cout<<x<<endl;
	cout<<z<<endl;
	cout<<b<<endl;
	
}
