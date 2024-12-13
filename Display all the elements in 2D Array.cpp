#include<iostream>
using namespace std;

int main()
{
	int a [3][2] =
	{
		{2,9},{4,5},{0,8}
	};
	
	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<2; ++j)
		{
			cout<<"a["<<i<<"]["<<j<<"]=" <<a[i][j]<<endl;
		}
	}
	return 0;
}
