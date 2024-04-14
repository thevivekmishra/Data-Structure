#include <iostream>
#include <string.h>
using namespace std;

// function to replace space
void replace(char ch[])
{
    int i = 0;
    int n = strlen(ch);

    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
    }
}

int main()
{
    char ch[100];

    cout << "Write a sentence" << endl;
    cin.getline(ch, 100);
    cout << "Entered sentence is :" << ch << endl;
    replace(ch);
    cout << "sectence after replacing space :" << ch;
}