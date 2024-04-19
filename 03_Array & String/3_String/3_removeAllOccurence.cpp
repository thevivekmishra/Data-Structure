#include <iostream>
#include <string.h>
using namespace std;

// function to remove all occurence from a given string
string removeAllOccurence(string str, string part)
{
    // find the index of the part;
    int pos = str.find(part);
    while (pos != string::npos)
    {
        str.erase(pos, part.length());
        pos = str.find(part);
    }
    return str;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    string ans = removeAllOccurence(str, part);
    cout << ans;
    return 0;
}