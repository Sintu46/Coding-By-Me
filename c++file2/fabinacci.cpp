//fabinacci series.
#include<iostream>
using namespace std;
 int main()
 { int i;
 
 	int num,c,b=1,a=0;                       //0,1,1,1+2=3,
	   cout<<"Enter th No terms :";
	   cin>>num;
	   
	    for(i=1;i<num;i++)
	    {
	    	cout<<a<<"\t";
	    	c=a+b;
	    	a=b;
			b=c;
			c=a;
		}
	   return 0;
 }

