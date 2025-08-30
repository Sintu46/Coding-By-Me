#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int a[5][5],b[4][4] ,c[4][4];
	cout<<"\nElement of the Array :";
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		cout<<"Element of the matrix ["<< i << j <<"]place :";
	 		cin>>a[i][j];
		 }
	 }
	 cout<<"\nElement of the matrix :\n";
	 	 for(i=0;i<n;i++){
	 	for(j=0;j<n;j++)
	 	{
	 		
	 		cout<<a[i][j]<<"\t";
	 	
		 }
		 cout<<"\n";
	 }
	 cout<<"\nElement of the matrix 2:\n";
		 for(i=0;i<n;i++)
		 {
	 	for(j=0;j<n;j++)
	 	{
	 		
	 		cout<<"\nElement of the matrix ["<<i<<j<<"]place:";
	 		cin>>b[i][j];
		 }
	}
		 cout<<"\nElement of the matrix 2 :\n";
	 	 for(i=0;i<n;i++)
		  {
	 	for(j=0;j<n;j++)
	 	{
	 		
	 		cout<<b[i][j]<<"\t";
	 	
		 }
		 cout<<"\n";
	 }
	 
	 cout<<"\n Addition of two Matrix:\n";
	  for(i=0;i<n;i++)
		  {
	 	for(j=0;j<n;j++)
	 	{
	 		c[i][j]=a[i][j]+b[i][j];
	 		cout<<c[i][j]<<"\t";
	 	
		 }
		 cout<<"\n";
	 }
	 
	 return 0;
}
