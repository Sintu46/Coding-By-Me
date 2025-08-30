#include<iostream>
#include<fstream>
using namespace std;
 int main()
 { string mytext;
 	// create a file by fun my fle.
 	ifstream myfile("C:\\Users\\Sintu Kumar\\OneDrive\\Desktop\\file.txt");
 	// cout<<"File has been created.";
 	
 	//we want to write some text.
 	while( getline(myfile,mytext))
	// myfile<<"Hlo viewers welcome to  our channel. , How are u!!";
	cout<<mytext;
	  // close the file
	  myfile.close(); 
 	 return 0;
 }
