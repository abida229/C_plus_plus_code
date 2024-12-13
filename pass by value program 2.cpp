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
int x =5;
cout<<"x =" << x <<'\n';

a(x);
cout<<"x =" << x <<'\n';
return 0;
}
