//Herarchical inheritance
#include<iostream>
using namespace std;
 class Animal{
 	 public:
 	 	 void food()
 	 	 {
 	 	 	cout<<"I an herbivorus animal and am eating the Food...";
		   }
  };
   class cat :public Animal
   {
   	 public:
   	 	 void voice()
   	 	 {
   	 	 	 cout<<"cat- My voice is Meow Meow...."<<endl;
			 }
   };
    class dog: public Animal
   
    {
    	public:
    		void voice()
    		{
    			cout<<"Dog-My vocie is woof Woof...."<<endl;
			}
	};
	 
	 int main()
	 {
	 	cat obj;
	 	dog d;
	 	obj.food(); obj.voice();
	 	d.food(); d.voice();
		  return 0;	 }

