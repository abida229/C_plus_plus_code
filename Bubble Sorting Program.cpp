             // bubble sorting
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int abc[5]={10,5,15,0,112};
int temp;
cout<<"array before sorting"<<endl;
// for display array before sort
for(int i=0; i<=4; i++)
{
cout<<abc[i]<<endl;
}
// sorting
for(int u=5; u>=1; u--)
{
for(int i=0; i<=4; i++)
{
// for comparing
if(abc[i]<abc[i+1])
{
temp=abc[i];
abc[i]=abc[i+1];
abc[i+1]=temp;
}
}
}
// after sorting
cout<<"Array after sort"<<endl;
for(int i=0; i<=4; i++)
{
cout<<abc[i]<<endl;
}
}
