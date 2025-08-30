#include<iostream>
using namespace std;
  void insertstring( string& originalstr,  string& insertstr, string& res, int pos)
{
    res = originalstr.substr(0, pos) + insertstr + originalstr.substr(pos);
}
    
 int main()
 {
    string originalstr="Hello World.";
    string insertstr="Beautiful ";
    string res; //resultant string array to store the final Array.
    int pos=6; //position to insert the string.
    insertstring(originalstr,insertstr,res,pos);
    cout<<"Original String: " << originalstr <<endl;
    cout<<"After Inserting String : "<< res<<endl;
 }