#include <iostream>
using namespace std;
int main()
{
	int a[10][10] , b[10][10], mult[10][10];
	int r1,r2,c1,c2,i,j,k;
	cout<<"Enter row and column for matrix1 ";
	cin>>r1>>c1;
	cout<<"Enter row and column for matrix2  ";
	cin>>r2>>c2;
	// Condition column of first matrix is equal to number of rows of 2nd matrix
	// for check this condition we put a check 
	
	while(c1!=r2)
	{
		cout<<"column and row are not equal enter again column and rows please " <<endl;
		cout<<"Enter row and column for matrix1 ";
	    cin>>r1>>c1;
	    cout<<"Enter row and column for matrix2  ";
	    cin>>r2>>c2;
		
	}
	cout<<endl<<"Enter elements of matrix 1" << endl;
	for(i=0; i<r1; i++)
	   for(j=0; j<c1; ++j)
	   {
	   	cout<<"Enter elements of a matrix a "<<i + 1 << j + 1 <<":";
	   	cin>>a[i][j];
	   }
	cout<<endl<<"Enter elements of matrix 2" << endl;   
	for(i=0; i<r2; i++)
	   for(j=0; j<c2; ++j)
	   {
	   	cout<<"Enter elements of a matrix b"<<i+1 << j+1 <<":";
	   	cin>>b[i][j];  
	   }   
	for (i=0; i <r1 ; i++)
	   for(j=0; j<c2; ++j)
	   {
	   	 mult[i][j]=0;
	   }
	for(i=0; i <r1; ++i)
	   for(j=0; j<c2;++j)
	      for(k=0; k <c1; ++k)
	      {
	      	mult[i][j] += a[i][k] * b[k][j];
		  }
	cout<<endl<<"Output of 2d multi array are: " <<endl;
	for(i=0; i <r1; ++i)
	for(j=0; j<c2;  ++j)
   {
   	
   	cout<<" "<<mult[i][j];
   	if(j == c2-1)
   	  cout<<endl;
   	  
   }
   return 0;
   
}
