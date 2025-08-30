#include<iostream>
using namespace std;

 void insertstring(string& originalstr, string& insert, int pos,string& res)
 {
    res=originalstr.substr(0,pos) + insert +originalstr.substr(pos);
 }
 int main()
 {
    string originalstr="Beautiful World";
    string insert="Hello ";
    int pos=0;
    string res;
    cout<<"String Before the Insertion: "<<originalstr<<endl;
     insertstring(originalstr,insert,pos,res);
   cout<<"String after the Insertion: "<<res<<endl;
   return 0;


 }