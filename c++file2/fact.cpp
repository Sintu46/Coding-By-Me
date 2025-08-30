#include<iostream>
using namespace std;
 int main()
{
	 int n,fac=1,i;
	  cout<<"Enter the No:";
	  cin>>n;
	  
	   for(i=1;i<=n;i++)
	   {
	   	fac=fac*i;
	   	}
	   	
	   	cout<<"Factorail of "<<n<<":";
	   	cout<<fac;
		   
	   
	   return 0;
}
