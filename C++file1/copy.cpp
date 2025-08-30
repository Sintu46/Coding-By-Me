#include<iostream>
using namespace std;
 class A
 {
 	int x,y;
 	public :
 		A( int a,int b)//parameterized constructor..
 		{
 			x=a; y=b;
		cout<<a<<ends<<b<<endl;
		 }
		 
		 A(A &ref) //copy constructor
		 {
		  x=ref.x;
		  y=ref.y;
		   cout<<x<<ends<<y;	
		 }
		 
 };
  int main()
  {
  	A obj(30,40);
  	A obj2=obj;
  	
   return 0;
  }
