#include<iostream>
using namespace std;
int main()
{
	int a=4,b=5;
	char z;
	cout<<"select operator which is (+,-,*,/): "<<endl;
	cin>>z;
	switch (z)
	{
		case '*':
		cout<<"product of two numbers  = "<<a*b<<endl;
		break;
		case '/':
			cout<<"divid of two numbers = "<<a/b<<endl;
	     	break;
        	case '+':
			cout<<"sum of two numbers = "<<a+b<<endl;
	    	break;
	
		case '-':
			cout<<"difference of two numbers  = "<<a-b<<endl;
	    	break;
	    	default:
	    		cout<<"This operator is not available: ";
				break;
	}
	
}
