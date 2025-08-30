#include<iostream>
using namespace std;
class teacher
{
	 protected:
	 	 string work;
	 	 public:
	 	  	void task()
	 	  	{
	      work="Complete Your Homework";
      	    } 
	
};
 class Student : public teacher
 {  
     string name;
      int roll_no;
  	public:
  				
 		 void target()
		  {
		  	name="Shintu Kumar";
		    roll_no= 02;  
 		 	cout<<"Homework :"<<work<<endl;
 		 	cout<<"Name of the student :"<<name<<endl;
 		 	cout<<"Roll_no Of the Student :"<<roll_no<<endl;
		  }
 	
 };
   int main()
   {
   	Student a;	
   	a.task();
   	a.target();
   	return 0;
   }
   
