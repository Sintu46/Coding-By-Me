#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
 char original[100]="Hello World !";
 char copy[100]="World";
 char *ptr = strstr(original, copy);
 if(ptr!= NULL)
 {
  cout<<"Substring found at position : "<<ptr-original<<endl;
  cout<<"Substring: " <<ptr<<endl;
 }
 else{
  cout<<"Substring Not Found"<<endl;
  cout<<"Substring :"<<copy<<endl;
 }
 return 0;
}