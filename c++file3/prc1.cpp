#include<iostream>
using namespace std;
 class info{
 	 private:
 	 	 string name,cast;
 	 	 int dob,mob,age;
 	 	 float salary;
 	 	 public:
 	 	 	void info_out()
 	 	 	{
 	 	 		cout<<"Enter user name:";
 	 	 		cin>>name;
 	 	 		cout<<"Enter the age :";
 	 	 		cin>>age;
 	 	 		cout<<"Enter your cast:";
 	 	 		cin>>cast;
 	 	 		cout<<"Enter your DOB:";
 	 	 		cin>>dob;
 	 	 		cout<<"Usr mobile no:"<<endl;
 	 	 		cin>>mob;
 	 	 		cout<<"Enter your salary :"<<endl;
 	 	 		cin>>salary;
 	 	 		
			   }
		 void user_info()
		 {
		 	cout<<"\n User Name:"<<name;
		 	cout<<"\nUser Age :"<<age;
		 	cout<<"\nUser cast :"<<cast;
		 	cout<<"\nUser Dob :"<<dob;
		 	cout<<"\nUser Mobile number :"<<mob;
		 	cout<<"\nUser salary  :"<<salary;
				}	   
 };
  intmain()
  {   
      info a;
      a.info_out();
      a.user_info();
  	 
  	  return 0;
  }
