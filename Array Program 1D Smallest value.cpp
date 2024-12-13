#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	float arr[50];
	cout<<"Enter total number of elements (1 to 50):";
	cin>>n;
	cout<<endl;
	for (int i=0; i<n; ++i)
	{
		cout<<"Enter number"<<i+1<<":";
		cin>>arr[i];	
	}
	for(int i=1; i<n; ++i)
	{
		if (arr[0]<arr[i])     //for largest element sign is (<)
		    arr[0]=arr[i];
	}
	cout<<"largest element="<<arr[0];
		
	return 0;
}
