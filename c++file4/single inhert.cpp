#include<iostream>
using namespace std;
 class Dad 
 {
     protected :
	  int amount ;
	  public:
	  void property()
	  {
	  	amount =546370;
	  }	
	  
 };
  class Son :public Dad
  {
  	 int money;
  	 public:
  	 	 void my()
  	 	 {
  	 	 	 money=24380;
  	 	 	  cout<<"MY own Money:"<<money<<endl;
  	 	 	  cout<<"Dad propery :"<<amount<<endl;
			}
  };
   int main()
   {
   	Son m;
   	m.my();
   	m.property();
   	 return 0;
   }
