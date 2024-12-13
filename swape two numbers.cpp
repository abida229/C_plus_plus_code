#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  using namespace std;
  
int main(int argc, char** argv) 
{
	int a=18, b=15, c;
	cout<<"Before Swapping"<<endl;
	c=a;      //   a=18, c=18
	a=b;    // b=15 , a=15
	b=c;  //  c=18 , b=18
	
	cout<<"\nAfter swapping."<<endl;
	cout<<"a="<<a<<endl;
	cout<<"\nAfter swapping."<<endl;
	cout<<"b="<<b<<endl;
 	return 0;
}
