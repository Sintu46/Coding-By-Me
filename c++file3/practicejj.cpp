#include<iostream>
using namespace std;
class sop{
	 public:
	 	void pos()
	 	{
	 	  cout<<"data of the base class.";
		 }
};
 
 class ops :public sop
 {
 	public:
 		void pos()
 		{
 			cout<<"data ofthe ops class.";
			 	
		 }
	
		 
 		
 			
 };
  
  int main()
  {
  	ops obj;
    sop*ptr;
   ptr= &obj;
    ptr->pos();
   
  	 return 0;
  }
