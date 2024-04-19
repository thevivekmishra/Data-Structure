#include <iostream>
#include <string.h>
#include <string>
using namespace std;

// function to remove duplicate like abba/aabcaadba
string removeDuplicate(string s)
{
    int i = 0;
    string ans = "";

    while (i < s.length())
    {
        // first we have to check length of ans before comparison bcz
        // suppose no any char is in ans so ans is 0; ans.length()-1 gives 0-1 =-1;
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i]) // comparing previous char with current char
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }

        i++;
    }
    return ans;
}
int main()
{
    string str;
    cout << "enter any string with duplicate char :";
    getline(cin, str);

    string finalAns = removeDuplicate(str);
    cout << finalAns;
    return 0;
}