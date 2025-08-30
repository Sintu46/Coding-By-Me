//Print the square root of first 5or(n) natural by function.
#include<iostream>
using namespace std;
 /*int square(int x)
 {
 	int square=x*x;
 	return square;
 }
 int main()
 { int n,i;
 //cout<<"Enter the No:";
 //cin>>n;
 cout<<"Square root :"<<endl;
 int sqrt=square(8);
 // for(i=1;i<=n;i++)
  {
  	cout<<sqrt;
	  }	*/
 int square(int x)
 {
 	return x*x;
	  }	 
	   int main()
	   { int n;
	   	cout<<"Enter the Number :";
	   	cin>>n;
	   	 
	   	 
	   	 
	   	 for(int i=1;i<=n;i++)
	   	 {
	   	 	int sqrt=square(i);
	   	 	
				cout<<sqrt<<ends;
			}
	   }
