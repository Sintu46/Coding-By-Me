//print odd value by fun call.
#include<iostream>
using namespace std;
 bool odd(int x)
 { if(x%2==0)
 {
 	return false;
 }
 	return true;
 }

int main(){
	 int a,b,i;
	 cout<<"enter two no :";
	 cin>>a>>b;
	 for(i=a;i<=b;i++)
	 {
	 	if(odd(i))
	 	{
	 		cout<<i<<ends;
		 }
	}
		
	 
	 return 0;
	 
	
}
