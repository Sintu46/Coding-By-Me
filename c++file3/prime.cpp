// prime number by fun call.
#include<iostream>

using namespace std;

 /* bool prime(int num)
  {
  	for(int i=2;i<num;i++)
  	{
  		if(num%i==0)
  		{
  			return false;
		  }
	  }
	  return true;
  }*/
   bool  is_prime(int num)
  {
  	for(int i=2;i*i<=num;i++)
  	{
  		if(num%i==0)
  		{
  			return false;
		  }
	  }
	  return true;
  }
 int main(){
 	 int a,b,i;
 	 cout<<"Enter two no:";
 	 cin>>a>>b;
 	  for(i=a;i<=b;i++)
 	  {
 	  	if(is_prime(i))
 	  	cout<<i<<ends;
	   }
	   return 0;
 	
 }
