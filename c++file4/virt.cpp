#include<iostream>
using namespace std;
 class pure{
 	 public:
 	 virtual void shown()
 	 	{
 	 		cout<<"Data of the pure class.";
		  }
 };
  class work:public pure 
  {
  	 public:
  	    void shown(){
  	    	cout<<"Data of the work class.";
		  }
  	 	
  };
   int main ()
   {
  work obj;
  pure*ptr;
  ptr=&obj;
  ptr ->shown();
  
  
    return 0;
   }
   

