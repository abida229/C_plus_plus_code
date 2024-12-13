# include <iostream>
using namespace std;
int main()
{
	int number,factorial,counter;
	cout<<"Enter a postive integer";
	cin>>number;
	factorial=1;
	counter=1;
	while(counter<=number)
	{
		factorial*=counter;
		counter+=1;
	}
	cout<<"The factorial of"<<number<<"is"<<factorial<<endl;
	
}
