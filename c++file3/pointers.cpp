#include<iostream>
using namespace std;
 int main(){
 	/*pointes-->Data Type Which hold the address of 
	 the othe data type.*/ 
	  int a=3;
	  int *b=&a;
	  // &--->Address of Oprator.
	  cout<<"The Address of A:" <<b<<endl;
	  cout<<"The Address of A:" <<&a <<endl;
	  
	  
	 // *--> value at Deference Operator.
	  cout<<"The value at Address :"<<*b;
	  return 0;
	  
 }
