#include<iostream>
using namespace std;
class car{
    
    public:
        car()
    	{
    		cout<<"The car is red hot.";
		}
};
 class car2:public car{
 	 
	  public:car2()
 	 {
 	 	 cout<<"\nThe car U r Looking  is Awesome.";
	  }
 };
  int main()
  {
  	car c;
  	 return 0;
  }
	
