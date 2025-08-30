#include<iostream>
using namespace std;
 class raman
 {
  private :	
   int a;
    string r; 	
    public :
     void show()
	 {
	 	a=10;
	 	 cout<<a<<endl;
		 }	
		  void won(){
		 
		 r= "I have won the 10 rupees.";
		 cout<<r;		 
	  }
		   
 };
  int main()
  {
  	raman obj;
  	obj.show();
  	obj.won();
  	 return  0;
  }
