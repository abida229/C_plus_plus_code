#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int number, factorial, counter;
	cout<<"Enter a positive integer:";
	cin>>number;
	factorial=1;
	counter =1;
	do{
		factorial*=counter;
		counter++;
		
	}
	while (counter<=number);
	cout<<"The factorial of"<<number<<"is"<<factorial<<endl;
	
	return 0;
}
