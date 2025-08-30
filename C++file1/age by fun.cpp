//Eligble fo vote by function call.
#include<iostream>
using namespace std;
 bool checkeligible(int age)
 {
 	if(age>=18)
 	{
 		return  true;
	 }else
	 {
	 	 return false;
	 }	
 }
 int main()
 { int a;
 cout<<"Enter the Age :";
 cin>>a;
  //int  for_vote=checkeligible(12);
  if(checkeligible(a))
  {
  	cout<<"You are eligble for vote."<<endl;
  }
  else
  {
  	cout<<"You are  not eligble for vote.";
  }
 return 0;	
 }
