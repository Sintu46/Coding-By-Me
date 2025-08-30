#include<iostream>
using namespace std;
 class A{
 	 int a,b;
 	 public:
 	  void input()
	   {
 	  	 a=10;b=30;
	   }
	   friend class B;
 };
  class B{
  	 int c;
  	 public :
  	  void add(A s){
  	  	       c=s.a+s.b;
  	   cout<<c;
		}
  	 
  	
  };
   int main(){
   	A w;
   	w.input();
   	B obj;
   	obj.add(w);
   	 return 0;
   }
