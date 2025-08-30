//Find th area & Cicumferences,-->area=pi r*r*h;>--<circum-->2pi*r;
#include<iostream>
using namespace std;
  double area( int r)
{
	double rds=3.14*r*r;
	 return rds;
 } 
 double circum( int r)//2pi*r
{
	
	 return 2*3.14*r;
 } 
 int main()
 { int r;
 cout<<"Enter the radius of the Circle :"<<endl;
 cin>>r;
  
  cout<<"Area of the triangle :"<<area(r)<<endl;
  cout<<"circumference of the triangle :"<<circum(r);
   return 0;
 	
 }
