#include<iostream>
using namespace std;
class teacher{
	 int id;
	 string name;
	 float salary;
	 public:
	 	void input_data()
	 	{
	   	  cout<<"Enter the id =";
	 	  cin>>id;
	      cout  <<"Enter the Name =";
	      cin>>name;
	      cout  <<"Enter the salary =";
	      cin>>salary;
	 	 }
	 	 
	 void display()
	 {
	  cout<<"\n Id-"    <<id;
	  cout<<"\t Name-"  <<name;
	  cout<<"\t Salary-"<<salary;	
		  }	 
	 
};
 class staff:public teacher
 {
 	 	 void data()
 	 	 {
 	 	 	void input_data();
 	 	 	void display();
		   }
 };
 
int main()
{ 
  teacher obj1 ,obj2;
  staff s1,s2;
  obj1.input_data();
  obj2.input_data();
  s1.input_data();
  s2.input_data();
  obj1.display(); 
  obj2.display();
   cout<<"\n--Data of staff----\n";
   s1.display();
   s2.display();
  	
	  
	   return 0; 
}

