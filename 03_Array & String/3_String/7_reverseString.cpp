#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string
string reverseString(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed.push_back(str[i]);
    }
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Allowing spaces in the string input
    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
