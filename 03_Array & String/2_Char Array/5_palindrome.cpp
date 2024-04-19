#include <iostream>
#include <string.h>
using namespace std;

// function to check palindrome  (example-> noon / wow / mom /)
bool checkPalindrome(char ch[])
{
    int start = 0;
    int n = strlen(ch);
    int end = n - 1;
    while (start <= end)
    {
        if (ch[start] != ch[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char ch[100];

    cout << "Enter any string to check it's palindrome or not : " << endl;
    cin.getline(ch, 100);

    if (checkPalindrome(ch))
    {
        cout << "The entered string is a palindrome." << endl;
    }
    else
    {
        cout << "The entered string is not a palindrome." << endl;
    }

    return 0;
}