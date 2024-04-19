#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr[100];

    // taking input directly-----------------------------

    // cout << "enter you full name :";
    // cin >> arr;
    // cout << "Your name is :" << arr << endl;

    // input -> vivek kumar mishra
    // output -> vivek bcz cin stops when it find space,tab,new line
    // to read white space we have to include string.h file and use getline to print

    cout<<"enter your full name :";
    cin.getline(arr, 50); //50 is the maz size
    cout << "your name is :" << arr<< endl; //output -> abcd efgh jklm   

    // taking input index wise---------------------------

    // arr[0] = 'v';
    // arr[1] = 'i';
    // cout << "enter arr[2] :";
    // cin >> arr[2];
    // cout << arr[0] << arr[1] << arr[2];

    // using loop to take input---------------------------

    // cout << "enter your name :";
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }
    // // print
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;
    // // printing index value
    // for (int i = 0; i < 11; i++)
    // {
    //     cout << "value at index " << i << " is :" << arr[i] << endl;
    // }
    // cout << endl;
    // after end of the character a null value is present after that a garbage value is present
    // null value represented by '\0' at its ascii value is 0;

    
    return 0;
}