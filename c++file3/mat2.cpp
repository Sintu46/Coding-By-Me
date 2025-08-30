#include<iostream>
using namespace std;
int main(){
	int i,j;
	int a[5][5],b[5][5] ,c[3][3];
 cout<<" Enter the element of the 1st Matrix :\n";
 	

 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
	 {
	 	cout<<"Number at ["<<i <<j<<"]place:";
	 	cin>>a[i][j];
	 }	 
 }
  cout<<"\n---> Matrix 2-->\n";
  cout<<"Enter the element of the 2nd matrix:\n";
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		cout<<"Number at ["<<i <<j<<"]place:";
  		cin>>b[i][j];
	  }
  }
  cout<<"\nMatix are:\n";
  cout<<" Element of the Matrix 1:\n";
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		cout<<a[i][j]<<"\t";
  	
	  }
	  cout<<"\n";
}
	  cout<<"\nMatix are:\n";
  cout<<"Elelment of the Matrix 2:\n";
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		cout<<b[i][j]<<"\t";
  	
	  }
	  cout<<"\n";
}
 cout<<"Addition of two Matrix :\n";
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		c[i][j]=a[i][j]+b[i][j];
  		 cout<<c[i][j]<<"\t";
	  }
	  cout<<"\n";
  }
	   return 0;
}

	  
  
