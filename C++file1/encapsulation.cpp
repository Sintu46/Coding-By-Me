#include<iostream>
 using namespace std;
  class Man 
  {
     private:
	  string name, address,age;
	   int balance;
	     
		 public:
		  void input()
		  {
		      name="Ravikant";
		      address="Old Bus Stand,Karnal";
		      balance=40000;
		      age="30 years";
		  }	
		   void output()
		   {
		   	 cout<<"Man Information....."<<endl;
		   	cout<<"Name :"<<name<<endl;
		   	cout<<"Addrees :"<<address<<endl;
		   	cout<<"Balance :"<<balance<<endl;
		   	cout<<"Age :"<<age<<endl;
		   }
  };
   class police :public Man
   {
   	public:
   		void fun(){
   			cout<<"\nYour are cought .";
		   }
   	 
		
   };
   int main()
  {
   Man p;
  p.input();
  p.output();
  police q;
  q.fun();
   /*	Man a;
   	a.input();
   	a.output();*/
   	 return 0;
   }
