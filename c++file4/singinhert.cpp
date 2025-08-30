#include<iostream>
using namespace std;
 class Dad 
 {   
     protected:
     int amount ;
     public:
	  void input()
	  {
	      amount=200000;
	  }	
 };
  class son: public Dad
  {
   int money;
  	public :
   void own()
   { 
      money=4000;
   	 cout<<"Dad money:"<<amount<<endl;
   	 cout<<"Son Money:"<<money;
	   }	
  };
   int main(){
   	 son q;
     q.input();
     q.own();
     
     return 0;
   }
   
     

