#include<iostream>
using namespace std;
 class person
 {
 	 private :
 	 	int run;
 	 	string msg;
 	 	
 	 	 public :
 	 	 	void play()
 	 	 	  {
 	 	 	  	run=100;
 	 	 	  	cout<<"Today  I Scored" <<run<<"runs"<<endl;
				  }
				
			void walk()
			  {
			  	msg="Today Iwalked 10Kilometer in the south direction";
				   cout<<msg<<endl;				  					
				}	  
 };                  
   
  int main()
 {
 	person obj;
 	obj.play();
 	obj.walk();
 	return 0;
 }
