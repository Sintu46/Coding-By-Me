#include<iostream>
using namespace std;
int main()
{
 int num1[20][20],num2[20][20],add[20][20];
 int i,j,n;
   cout<<"Enter the Array Element :";
   cin>>n;
   cout<<"Enter the Element of the 1st matrix :\n";
	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  	 cout<<"\nData at ["<<i<<j <<"] place :";
	   	 cin>>num1[i][j];	
	  		}
	}
	cout<<"\nElement of the 1st Matrix :\n";
	   for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
		  
	      cout<<num1[i][j]<<"\t";
	  }
	       cout<<"\n";
	   }
  cout<<"\nEnter the Element of 2nd matrix :";
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 {
	   	cout<<"\n Element of the ["<<i<<j<<"]place :";
	   	cin>>num2[i][j];
	   }
}
    cout<<"Element of the Matrix 2 :\n";
	for(i=0;i<n;i++)
	   {
	   	for(j=0;j<n;j++)
	   	{
	   	 
	   	 cout<<num2[i][j]<<"\t";
	   } 
	   cout<<"\n";
} 
 cout<<"After additon of the Matrix :\n";
 for(i=0;i<n;i++)
	   {
	   	for(j=0;j<n;j++)
	   	{
	   	 add[i][j]=num1[i][j]+num2[i][j];
	   	 cout<<add[i][j]<<"\t";
	   } 
	   cout<<"\n";
    }
  
	  return 0;
}
