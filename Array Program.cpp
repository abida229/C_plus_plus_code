#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int number[8];
	int sum=0,i;
	cout <<"Enter 8 numbers which you want to store in array and sum all of the array:";
	for( i=0;i<8; i++)
	{
	cin>>number[i];
	sum+=number[i];	
	}
	cout<<"The sum of array is"<<sum<<endl;
	
	return 0;
}
