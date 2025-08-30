//count the number>
#include<iostream>
using namespace std;
int main()
{
	int n,count;
	cout<<"Enter the Number :";
	cin>>n;
	 while(n>0)
	 {
	 	n/=10;
	 	count++;
	 }
	 cout<<"Total Number is:"<<count;
	
	return 0;
}
