//recursive Function.
#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num<=1)
	{
		return 1;
	}
	   
	
	return num*factorial(num-1);
}
 int main()
 {
 	int n;
 	cout<<"Enter the number :";
 	cin>>n;
 	 cout<<"The factorial of "<<ends<<n<<":"<<factorial(n);
 	 return 0;
 }
