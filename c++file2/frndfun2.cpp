#include<iostream>
 using namespace std;
 class raja;
 class rohit
   {
   	 private :
   	 	  int m;
   	 	  public :
   	 	 void request()
   	 	  {
			  	m=10;
			  }
		  friend void raman(rohit p,raja p2);
   };
   
   class raja
   {
   	 private :
   	 	  int n;
   	 	  public :
   	 	 void request()
   	 	  {
   	 	  	n=10;
   	 	  	
			  }
			   friend void raman( rohit p,raja p2);
   };
   void raman(rohit p,raja p2)
   { 
   int c;
     c=p.m+p2.n;
     
   	 cout<<c;
   }
    int main()
    {
    	rohit a;
    	a.request();
    	raja a2;
    	a2.request();
    	raman(a,a2);
    	return 0;
	}
