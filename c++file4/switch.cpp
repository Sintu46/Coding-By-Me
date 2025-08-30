#include<iostream>
using namespace std;
 int main()
 {
 	 int day;
 	 cout<<"Enter the choice :";
 	 cin>>day;
 	  switch(day)
	   {
 	  	 case 1:
 	  	 	{
 	  	 		cout<<" Today day is Sunday";
 	  	 		break;
				}
				case 2:
 	  	 	{
 	  	 		cout<<"Today day is Monday";
 	  	 		break;
				}
				case 3:
 	  	 	{
 	  	 		cout<<"Today day is Tuesday";
 	  	 		break;
				}
				case 4:
 	  	 	{
 	  	 		cout<<"Today day is Wednesday";
 	  	 		break;
				}
				case 5:
 	  	 	{
 	  	 		cout<<"Today day is Thursday";
 	  	 		break;
				}
			
			
				case 6:
 	  	 	{
 	  	 		cout<<"Today day is Friday";
 	  	 		break;
				}
				
				case 7:
 	  	 	{
 	  	 		cout<<"Today day is Saturday";
 	  	 		break;
				}
				default:
					{
					cout<<"Invalid Input";
					break;
					}
	   }
	    return 0;
 }
