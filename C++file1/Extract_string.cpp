#include<iostream>
using namespace std;
void extractsubstring(string& str, int start, int length, string& result) {
    if (start < 0 || start >= str.length() || length < 0 || start + length > str.length()) {
        result = " "; // Invalid range
        return;
    }
    result = str.substr(start, length);
}
int main() {
    string str = "Hello Beautiful World!";
    int start = 6; // Starting index for extraction
    int length = 15; // Length of the substring to extract
    string result; // Resultant string to store the extracted substring
      cout << "Original String: " << str << endl;
      
    extractsubstring(str, start, length, result);
    
    cout << "Extracted Substring: " << result << endl;

    return 0;
}
