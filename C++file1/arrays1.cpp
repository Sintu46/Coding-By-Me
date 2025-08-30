#include<iostream>
using namespace std;
int main()
{
/*Array--> is a collectin of items of similar type stored 
in contiguous memory locations.*/
 int marks[]={28,29,30,45};
 int i;
 cout<<marks[0]<<endl;
 cout<<marks[1]<<endl;
 cout<<marks[2]<<endl;
 cout<<marks[3]<<endl;
 //Secon method to print Array.
 for(i=0;i<4;i++)
 {
 	cout<<"The Value of the Marks"<<i<<":"<<marks[i]<<endl;
 }
  return 0;	
}


