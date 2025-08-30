#include<iostream>
using namespace std;
 int main()
  try{
  	int age=19;
  	if(age>18)
  	{
  		cout<<"Access Granted- You are old enough";
	  }
	  else{
	  	throw(age);
	  }
  }
   catch( ...)
   {
   	cout<<"Access Denied-you mmust be at least 18 years old \n ";
   	   }
 
   
 
