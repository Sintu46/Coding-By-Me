#include<iostream>
using namespace std;
 class person {
 	 private:
	  int run;
 	 string msg;
 	  public :
 	  
		
 	  	void walk()
 	  	{
		msg="Today I walk 3kilometer";
 	  	cout<<msg<<endl;
 	  	
		}
 	  	
 	  	 void play()
 	  	 {
    	 run=59;
 	    cout<<"Today I scored"<<run<<"runs"<<endl;
		 }
 	  	  
 	
 };
 
 
 
 int main()
 {
 	person obj;
 	obj.play();
 	obj.walk();
 	 return 0;
 	
 }
