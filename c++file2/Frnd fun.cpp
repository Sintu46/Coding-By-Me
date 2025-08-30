#include<iostream>
using namespace std;
class rohit;
 class ankit
 {
 	private :
 	 string  tv;
	 public :
	 void show()
		 {
		 tv ="IPL FINAL 2024";	 	
		 }
		 friend void amit(ankit r,rohit p);
};
class rohit{
	 int a,b;
	 public:
	  void add()
	  {
	  	a=20;b=10;
	  	 cout<<"Value of a & b-->"<<a<<"\n"<<b;
		  }	
};
 void amit(ankit r,rohit p)
  {
  	cout<<" Hi! I'M  Amit, I am Watching"<<r.tv;
}
 int main()
 {
 ankit o;
 o.show();
 rohit b;
 b.add();
 amit(o,b);
  return 0;
 }
 
