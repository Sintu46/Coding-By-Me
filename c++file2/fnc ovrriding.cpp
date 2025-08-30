
 //Runtime polymorphism(Fun overiding.)
 #include<iostream>
 using namespace std;
  class A{
  	 public:
  	 	virtual void person() // vr-used to terminate the crnt fun.
  	 	 {
  	 	 	 cout<<"Good morning..."<<endl;
  	 	 	 
			}
  };
   class B :public A
   
   {
       public:
   	      void person()
			 {
   	 	        cout<<"Good Night..."<<endl;// function overriding
	            }
   };
    int main()
    {
    /*	B obj;
    	obj.person();
    	obj.A::person();
		 
		
		 	
//Function calling by pointer...
	int main()
    {
    	A*p;
    	B obj;
    	p=&obj;
    	p->person();
		 
		 return 0;
		 	}	 */	
		 	A*b=new B();
		 	b->person();
		 	 return 0;
		 	}
