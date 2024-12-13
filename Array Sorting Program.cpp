// Selection sorting
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int xyz[5]={20,12,10,15,2};
int temp,p;
int min;
cout<<"Array before sorting"<<endl;
// for display
for(int i=0; i<=4; i++)
{
cout<<xyz[i]<<endl;
}
//sorting techniques
// for loop with u variable counter replacees the value in assending /decending order
for(int u=0; u<=4; u++)
{
min=xyz[u];
p=u;
// for loop with i variable counter is for display and comparing.
for(int i=u; i<=4; i++)
{
if(min>xyz[i])
{
min=xyz[i];
p=i;
}
}
temp=xyz[p];
xyz[p]=xyz[u];
xyz[u]=temp;
}
cout<<"After sorting"<<endl;
for(int i=0; i<=4; i++)
{
cout<<xyz[i]<<endl;
}
}
