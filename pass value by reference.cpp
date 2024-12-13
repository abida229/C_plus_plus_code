#include<iostream>
using namespace std;
void p (float &g, float &h)
{

float w=0; 
w= g;
g=h;
h=w;
return ;
}



void p (float &g, float &h);

int main()
{
float n;
cout<<"\tEnter value of ";
cin>>n;
float m;
cout<<"\tEnter value of ";
cin>>m;
cout<<"Value before swape of n: "<< n << endl; 
cout<<"Value before swape of m: "<< m << endl;

p(n,m);

cout<<"value after swap of n: " << n <<endl;
cout<<"value after swap of m: " << m <<endl;
return 0;
}
