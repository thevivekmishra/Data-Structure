#include <iostream>
#include <string.h>
using namespace std;

// function to find length of the string 
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[100];
    cout << "enter you name :";
    cin.getline(name, 50);
    cout << "your name is " << name << endl;

    cout << "length of your name is :" << length(name)<<endl;

    //2nd method 
    cout<<"calculating length using predefined function "<<strlen(name);

    return 0;
}