#include<iostream>
using namespace std;
 void substringserach(string& str, string& substr, int& pos) {
     pos = str.find(substr);
     if (pos != string::npos) {
         cout << "Substring "<<substr <<" found at position: " << pos << endl;
     } else {
         cout << "Substring not found." << endl;
     }
 }
 int main(){
        string str = "Hello Beautiful World!";
        string substr = "Beautiful";
        int pos = -1; // Initialize position to -1 to indicate not found
    
        substringserach(str, substr, pos);
    
        return 0;
 }