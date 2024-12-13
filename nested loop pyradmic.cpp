#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int rows;
	cout<<"Enter number of rows:";
	cin>>rows;
	for (int i=1; i<=rows; ++i)
	{
		for (int j=1; j<=i; ++j)
		{
			cout<<j<<" ";
			
		}
		cout<<"\n";
	}
	return 0;
}
