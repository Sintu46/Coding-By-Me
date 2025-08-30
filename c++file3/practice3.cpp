
#include<iostream>
using namespace std;
int  square(int num)
{
	return num*num;
}

int main()
  
  {
   int a;
    cout<<"Enter the value:";
    cin>>a;
    for(int i=1;i<=a;i++)
    {
    	cout<<"square of"<<i<<":"<<square(i)<<endl;
	}
	
    
	 return 0;
  }
   

