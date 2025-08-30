#include<iostream>
#include<cstring> // for  String fun-->strcat,strstr,strcpy,strlen,strcmp function.
#include<string>
 using namespace std;
 int main()
 {
   // -----------------STRING FUNCTION BY ARRAY----------------------------------
      // By USing Char  Array.
   
     // char str[100]="hello World";
     // cout<<str;

    //Find the length of the String.

  /*char str[] = "Hello World";
          int length=0;

        for( int i=0 ; i < str[i]!='\0';i++)
     {
        length++;
     }
     cout<<"Length of the String: " << length;*/

     /*
    // ***************STRING COMPARE OPERATION ON ARRAY*******************************
        char  str2[]="Sumit";
        char  str3[]="Sumit";
        int res = strcmp(str2,str3);
        if(res<0)
        {
            cout<<str2<<" Comes before " <<str3;
        }
        else if(res > 0)
        {
            cout<<str3<<" Comes after the "<<str2;
        }
        else{
            cout<<str2<<" Is Equal to the " <<str3;
        }// This code for Compare two String in Array.
        */

/*
  --------------STRING OPERATION USING STRING KEYWORD--------------------------------

     // String Cocatenation
      char str1[]="Sintu";
      char str2[]="Kumar";
      strcat(str1,str2);
       cout<<str1;
*/
    // By Using String.
    // string str="Hello World";
    // cout<<str<<endl;

       // Finding the length by Using String.
       //cout<<str.length();
/*
  // String using for Concatentation.
   string str1="Sintu";
   string str2="Kumar";
   string str3= str1 + str2;
   cout<<str3;
   */
  // Code For Compare  by using string.
   string  str4="Sintu";
   string str5 = "Sumit";
    cout<<(str4 == str5) ;
    return 0;
 }
