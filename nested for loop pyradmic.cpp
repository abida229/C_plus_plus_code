# include <iostream>
using namespace std;
int main()
{
	int i,j,N;
	cout<<"Enter a number";
	cin>>N;
	for (i=1; i<=N; i++)
	{
		for (j=i; j<=N; j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
}
