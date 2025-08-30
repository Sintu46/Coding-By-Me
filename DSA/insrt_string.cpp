#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 void insertString(char*src,char*insert,int pos,char*res)
 {
    int len = strlen(src);
    strncpy(res,src,pos);
    res[pos]='\0';
    strcat(res,insert);
    strcat(res,insert+pos);
 }
 int main()
 {
    char str[]="Hello World!";
    char insert[] ="Beautiful";
    int pos = 6;
    char res[100];
    insertString(str,insert,pos,res);
    cout<<"Originl String:"<<str<<endl;
    cout<<"String to insert :"<<insert<<endl;
    cout<<"Position at insert:"<<pos<<endl;
    cout<<"After the Insertion :"<<res<<endl;
     return 0;
 }