#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char answer;
	cout<<"Do you want to play the game:(y/n)";
	cin>>answer;
	while(answer=='y')
	{
		cout<<"Play game...."<<endl;
		cout<<"Do you want to play again:(y/n)";
		cin>>answer;
		
	}
	
	return 0;
}
