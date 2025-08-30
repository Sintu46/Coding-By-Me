// Class template...
#include<iostream>
using namespace std;
 template<class A>
  class print
  {
  	public:
  		print(A x, A y)
  		{
  			cout<<x<<ends<<y;
		  }
  };
  int main()
  {
  	// print<int> obj(100,200);
  	 //print<char> obj('A','B');
  	 //print<string> obj("Sintu","prince");
  	 print<float> obj(100.34,20.40);
  	  return 0 ;
  }

