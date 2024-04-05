#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any no. to check wheather it is even or odd " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "enterd number is even" << endl;
    }
    else
    {
        cout << "entered no. is odd" << endl;
    }
    return 0;
}