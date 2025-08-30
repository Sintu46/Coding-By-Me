//Exception Handling..
#include<iostream>
using namespace std;
int main()
{
	cout<<"Execution starting ..."<<endl;
	int a,b,c;
	 cout<<"enter two no :";
	 cin>>a>>b;
	 
	  try
	  {
	  	if(b==0)
	  	throw b;
	  	c=a/b;
	  	 cout<<"Result :"<<c<<endl;
	  	 
	  }
	  
	   catch(...)
	   {
	   	cout<<"Can't divide by 0.."<<endl;
		}
		cout<<"Execution Ended...";
		 return 0;
}
