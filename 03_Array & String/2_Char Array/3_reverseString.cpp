#include <iostream>
#include <string.h>
using namespace std;

// function to reverse string
void reverseString(char ch[])
{
    int start =0;
    int n = strlen(ch); //calculate length of the string
    int end =n-1;

    while(start <= end)
    {
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
   
}
int main()
{
    char ch[100];

    cout << "Enter a string :";
    cin.getline(ch, 30);
    cout << "entered string are :" << ch << endl;

    reverseString(ch);
    cout << "Reverse of the string is :"<<ch;
    return 0;
}