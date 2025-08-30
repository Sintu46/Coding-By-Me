//reverse Number.
#include<iostream>
using namespace std;
 int main()
 {
 	int n,rev;
 	cout<<"Enter the Number:";
 	cin>>n;
 	cout<<"Reverse Number are :";
 	 while(n>0)
	  {
 	 	 rev=n%10;
 	 	  cout<<rev;
 	 	  n=n/10;
	  }
 }
