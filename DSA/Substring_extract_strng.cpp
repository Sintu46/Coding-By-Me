#include<iostream>
using namespace std;
void extractstring(string&str, int start,int len,string& res) // create a function with extractstrin name.
{
    if(start < 0 && start >= str.length() || len < 0 && start+len > str.length())
    {
         res="Invalid Extraction";
        return ;
    }
    res = str.substr(start,len);

}
 int main()
 {
    string str="Hello Beautiful World.";
    int start = 6;  //Starting the Extract Word.
    int len = 5; //At  this length  string will be extract. -->6 to 15.
    string res; // initiliazes for storing the extractin word from the string.

     cout<<"before the Extraction : "<<str<<endl;
     extractstring(str,start,len,res);
     cout<<"After the Extraction: "<<res<<endl;
 }