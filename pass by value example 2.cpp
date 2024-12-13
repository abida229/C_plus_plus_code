#include <iostream>
using namespace std;
void a(int y)
{
cout<<"Y =" <<y <<'\n';

y=6;
cout<<"Y =" <<y <<'\n';
}
int main()
{
int x;
cout<<"x =" << x <<'\n';
cin>>x;
a(x);
cout<<"x =" << x <<'\n';
cin>>x;
return 0;
}
