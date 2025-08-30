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
   	  	 cout<<"I am Cat"<<endl;
		 }
  };
   
    class cat:public Animal
    {
    	public:
    	void sound(){
    		cout<<"Meow.. Meow.."<<endl;
		}
	};
	 int main()
	 {
	 	cat c;
	  c.sound();
	  c.identity();
	  return 0;
	  
	 }
	  
 
