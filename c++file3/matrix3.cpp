#include<iostream>
using namespace std;
 int main()
 {
 
  int a[2][2];
  int i,j;
  cout<<"element of the matrix :\n";
  cout<<"\n=============\n";
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
   	cout<<"Data at"<<i<<j<<"place :";
   	cin>>a[i][j];
   }
     }
   cout<<"\n---------------\n";
    cout<<"Element are :\n";
    cout<<"\n============\n";
    for(i=0;i<2;i++)
    {
   	 for(j=0;j<2;j++)
   	 {
   	cout<<a[i][j]<<"\t";
       }
     cout<<"\n";
     }
     cout<<"\n----------------\n";
     cout<<"After the transpose :\n";
     cout<<"\n=============\n";
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
	   
   	cout<<a[j][i]<<"\t";
      }
    cout<<"\n";
}
   return 0;
}
