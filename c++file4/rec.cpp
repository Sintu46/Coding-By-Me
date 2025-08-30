//Recursive function.
#include<iostream>
using namespace std;
 int factorial(int n)
 {
 	if(n<=1)
 	{
 		return 1;
	 }
 	return n*factorial(n-1);
 }
 int main()
 {
 	 int num;
 	cout<<"Enter a number :"<<endl;
 	cin>>num;
 	cout<<"The Factorial of"<<ends<<num <<":"<<factorial(num);
 	return 0;
 }
