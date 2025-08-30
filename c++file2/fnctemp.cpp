/*function Template... in which we can use any data type like-
   string,char,int, float etc.*/
#include<iostream>
using namespace std;
template<class A>
void print(A x, A y)
{
	 cout<<x<<ends<<y<<endl;
}
 int main(){
 	 print(10,20);
 	  print('a','b');
 	  print("Sintu Kumar","Prince Kumar");
 	  print(68.980,34.004);
 	 
 }
  
