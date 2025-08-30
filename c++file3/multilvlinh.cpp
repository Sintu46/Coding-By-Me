#include<iostream>
using namespace std;
 class A{
 	protected :
 	 float  a,b;
 	 public :
 	 	void Input()
 	 	{
 	 		cout<<"Enter two no :";
 	 		cin>>a>>b;
		  }
 };
 class B :public A 
 {
 	int c;
	 public :
 		 void add()
		  {
		  c=a+b;
		  cout<<"Addition :"<<c<<endl;
		  }
 		 void sub()
		  {
		  c=a-b;
		  cout<<"Substraction :"<<c<<endl;
		  }
 		 
 	
 };
 class C :public B
 {  
   int d;
 	public:
 		void mul()
 		{
 			d=a*b;
 			cout<<"Multiplication :"<<d<<endl;
		 }
 	void Div()
 		{
 			d=a/b;
 			cout<<"Division :"<<d<<endl;
		 }
 };
 
  int main()
  {
  	C obj;
  	obj.Input();	
  	obj.add();
  	obj.sub();
  	obj.mul();
  	obj.Div();
  	return 0;
  }
