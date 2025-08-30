#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void searchstring( string& originalstr ,string& searchstr ,int& pos )
 {
      pos= originalstr.find(searchstr);
    if(pos != string::npos)
    {
       cout<<"Element "<<searchstr<<" is found in the Main String at "<<pos; 
    }
    else{
         cout<<"Element "<<searchstr<< " is  not found in the Original String. ";
    }
 }
 int main()
 {
     string originalstr="Hello Beautiful World.";
    string searchstr =" Beautiful ";
     int pos=-1;
     

     searchstring(originalstr,searchstr,pos);
    
     return 0;
 }