#include<iostream>
using namespace std;
template<class A>
 class over{
 	A s,k;
 	public:
 		 over(A j,A l)
 		 {
 		 	s=j;k=l;
			cout<<"j="<<s<<ends<<"l="<<k<<endl;	
		  }
	  	  
 };
  int main()
  {
  //	over<int>ob(20,30);
  	//over<double>ob(20.2,30.33);
  	//over<string>ob("Sintu","Kumar");
  	over<char>ob('H','K');
 
  	 return 0;
  }
