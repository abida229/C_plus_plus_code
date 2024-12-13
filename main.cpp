#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
int i,j;
j=10;
i=(j++,j+100,999+j);
cout<<i;

	return 0;
}
