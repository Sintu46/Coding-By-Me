// Abstract class....
 //virtual  func ... 
#include<iostream>

 using namespace std;
  class Animal
  {
  	public:
   	 virtual void sound()=0;
   	  void identity()
   	  {
   	  	 cout<<"\nI am Cat\n"<<endl;
		 }
  };
   
    class cat:public Animal
    {
    	public:
    	void sound(){
    		cout<<"\nMeow.. Meow..\n"<<endl;
		}
	};
	 int main()
	 {
	 	cat c;
	  c.sound();
	  c.identity();
	  return 0;
	  
	 }
	  
 
