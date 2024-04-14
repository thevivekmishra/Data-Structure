#include <iostream>
#include <string.h>
using namespace std;

// function to convert string into uppercase
void convertIntoUpperCase(char ch[])
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        ch[i] = ch[i] - 'a' + 'A';
    }
}

// function to convert string into lowercase
void convertIntoLowerCase(char ch[])
{
    for (int i = 0; ch[i] != '\0'; i++)
    {
        ch[i] = ch[i] - 'A' + 'a';
    }
}

int main()
{
    // char ch[100]= "vivek";

    char ch[100];
    cout << "Enter any string to convert  :";
    cin.getline(ch, 100);

    bool hasUpperCase = false;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            hasUpperCase = true;
            break;
        }
    }
    if (hasUpperCase)
    {
        cout << "Please enter all the string in small letter" << endl;
    }
    else
    {
        convertIntoUpperCase(ch);
        cout << "Uppercase --> " << ch << endl;
    }
    // convertIntoLowerCase(ch);
    // cout<<"Lowercase-->"<<ch<<endl;

    return 0;
}