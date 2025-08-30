#include<iostream>
using namespace std;
void deleteString(string& str, int pos, int len) {
    str.erase(pos, len);
}
int main()
{
    string str = " Hello BeautiFul World!";
    int pos = 6;  // Position to start deleting the substring
    int len = 5; // Length of the substring to delete.

    cout << "Original String: " << str << endl;
    deleteString(str, pos, len);
    cout << "String after deletion: " << str << endl;
    return 0;
}