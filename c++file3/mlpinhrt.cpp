//Multiple inheritance
#include<iostream>
using namespace std;
int a,b,c;
 class A{
 	 
 	  public:
 	  	void input();
 	  	void add(); 	                                                                                                                                                                                                                                    
 };
  void A::input(){
  	 cout<<"Enter two no :";
  	 cin>>a>>b;
  }
   void A::add(){
   	 c=a+b;
   	 cout<<"Addition :"<<c<<endl;
   }
    
    class B
	{
		 public:
	 void sub();
	 void multi();
	};
	 void B::sub(){
	 	 c=a-b;
	 	 cout<<"Substraction :"<<c<<endl;
	 }
	  void B::multi() {
	  	c=a*b;
	  	cout<<"Multiplication :"<<c<<endl;

	  }
	   class C : public A, public B
	   {
	   public:
	 void div();
	   
	   };
	    void C :: div()
	    {
	    	c=a/b;
	    	cout<<"Division :"<<c;
		}
		 int main()
		 {
		 	C obj;
		 	obj.input();
		 	obj.add();
		 	obj.sub();
 	 	    obj.multi();
		 	obj.div();
		 	 return 0;
		 }


