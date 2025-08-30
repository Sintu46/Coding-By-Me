#include<iostream>
 using namespace std;
  class rohan;
  class rohit{
  	  private :
  	  	int a;
  	  	 public :
  	  	 	 void give(){
  	  	 	 	a=20;
				  }
		 friend  void  aman(rohit p,rohan p2);		  
  };
  
  class rohan{
  	  private :
  	  	int b;
  	  	 public :
  	  	 	 void give(){
  	  	 	 	b=30;
				  }
		 friend  void  aman(rohit p,rohan p2);		  
  };
   void aman(rohit p,rohan p2){
   	 int c;
   	 c=p.a+p2.b;
   	  cout<< "Total Amount :"<<c;
   }
    int main()
    {
    rohit a;
    a.give();
    rohan a2;
    a2.give();
     aman(a,a2);
     return 0;
	}
    
