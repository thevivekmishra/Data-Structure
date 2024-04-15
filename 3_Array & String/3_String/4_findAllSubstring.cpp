#include <iostream>
#include <string>
using namespace std;

// Function to print all substrings 
void printAllSubstrings(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << str.substr(i, j - i + 1) << endl;
        }
    }
}

int main()
{
    string str;
    cout << "Enter any string: ";
    getline(cin, str);

    cout << "All substrings:\n";
    printAllSubstrings(str);
    return 0;

    // remember substring is a continuous sequence
    //input -> abc
    //output -> a ab abc b bc c
}
