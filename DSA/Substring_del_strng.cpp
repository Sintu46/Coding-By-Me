#include<iostream>
using namespace std;

  void delstring( string& originalstr, int pos, int element)
  {
    originalstr.erase(pos,element);
  }
 int main()
 {
    string originalstr="Hello Beautiful World";
      int pos = 5;
      int element = 4;
      cout<<"Before the DEletion : "<< originalstr<<endl;
       delstring(originalstr,pos,element);

       cout<<"After the Deletion of the Element : "<<originalstr<<endl;
       return 0; 
 }