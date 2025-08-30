//Sum of n number.
#include<iostream>
 using namespace std;
  int main()
  {
  	int n,sum=0,reserve;
  	 cout<<"Enter the Number :";
  	 cin>>n;
  	  while(n>0)
  	  {
  	  	reserve=n%10;
  	  	sum=sum+reserve;
  	  	n=n/10;
		}
		 cout<<"Sum of n number :"<<sum;
		 return 0;
  	 
  }
