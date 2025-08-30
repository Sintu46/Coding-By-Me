// Func ovreriding.
 #include<iostream>
 using namespace std;
  int c,a,b;
  class A{
  	public:
  		 void add()
  		 {
  		 	cout<<endl<<"Enter the value of a & b:";
  		 	cin>>a>>b;
  		 	c=a+b;
  		 	cout<<"Sum of two number :"<<c<<endl;
		   }
  };
  class B :public A
  {
  	public:
  		 void add()
  		 {
  		    cout<<endl<<"Enter the value of a & b:";
  		 	cin>>a>>b;
  		 	c=a*b;
  		 	cout<<"Multiplication :"<<c;
		   }
		
  };
   int main()
   {
   	B d;
   	d.add();
   /*	A w;
   	w.add(4,5);*/
   	d. A:: add();

 return 0;
   }
