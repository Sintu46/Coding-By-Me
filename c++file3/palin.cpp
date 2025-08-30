#include<iostream>
using namespace std;
int main()
{ 
 int n,r,sum=0,c;
    cout<<"Enter the number:";
    cin>>n;
    c=n;
     while(n>0)
     {
     	r=n%10;
     	sum=(sum*10)+r;
     	n=n/10;
	 }
	
	 if(c==sum)
	 {
	 	cout<<"\nPalindrome No.";
	 }
	 else
	 {
	 	cout<<"\nNot a Palindrome No.";
	 }

	 return 0;
  }
