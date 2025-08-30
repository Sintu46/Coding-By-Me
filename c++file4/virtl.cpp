//virtual override function
#include<iostream>
using namespace std;
 class car{
 	 public:
 	 	  virtual void  brand()  /*vir-->is provide a accesibility  to override the  
		                          class "Car"from class ford.*/
 	 	 {
 	 	 	cout<<"This is a Generic Car:\n";
 	 	 	
		   }
 };
 class ford:public car
 {
 	public:
 		void brand()
 		{
 			cout<<"This is Ford car :"<<endl;
		 }
 };
  /*class toyota:public car
  {
  	 void brand(){
	    cout<<"This is a Toyota Car:"<<endl;
	   }
  };*/
   int main()
   {
   	car*car1=new ford();
   	//car*car2=new toyota();
   	car1->brand();
   //	car2->brand();
   	 //delete car1;
   	 //delete car2;
   	 return 0;
   	
   }
