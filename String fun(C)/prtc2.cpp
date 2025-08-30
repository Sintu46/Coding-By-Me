#include<iostream>
#include<string>
using namespace std;
 int main()
 { 
    char str[100];
 	int i,length=0;
 	 cout<<"Enter the String:";
 	 cin>>str;
 	 for(int i=0;str[i]!='\0';i++)
 	 {
 	 	length++;
	  }
	  cout<<"Length of the String:",str;
 	 return 0;
 }
