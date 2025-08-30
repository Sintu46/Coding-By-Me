//Function overloading or compile time polymorphism..
#include<iostream>
using namespace std;
 int num1,num2,c,s,a,b;
 class A{
 	 public:
 	 	  A()
 	 	 
 	 {
 	 	 cout<<"Enter two no :";
 	 	 cin>>num1>>num2;
 	 	 c=num1+num2;
 	 	  cout<<"Addition:"<<c<<endl;
	  }
	    A(int a)
	   {
	   	cout<<"Enter two no :";
	   	cin>>a>>b;
		s=a*b;
	   	  cout<<"Multiplicaion :"<<s<<endl;
	   }
	  void A::A(int a
	  )
	   
 };
  int main()
  {
  	 A obj;
  	// obj.add();
  	 //obj.add(a,b);
  	  return 0;
  }
