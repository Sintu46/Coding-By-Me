#include<iostream>
using namespace std;
 template<class T>
 int  oral(T a, T b)
 {
 	cout<<"A="<<a<<ends<<"B="<<b<<endl;
 }
  int main()
  {
  	int p=10,r=20;
  	char m='S', n='K';
  	float s=12.34, d=3.44;
  	oral(p,r);
  	oral(m,n);
  	oral(s,d);
  	 return 0;
  }
