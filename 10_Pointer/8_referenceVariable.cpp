// REFERENCE VARIABLE -> SAME MEMORY LOCATION WITH DIFFERENT NAMES

#include <iostream>
using namespace std;

// pass by value------------
//  void solve(int x){
//      x++;
//  }

// pass by reference-----------
void solve(int &x)
{
    x++;
}

int main()
{

    int a = 5;
    // creating reference variable
    int &b = a;

    cout << "a :" << a << endl;
    cout << "b :" << b << endl;

    a++;
    cout << "after incrementing a :" << endl;
    cout << "a :" << a << endl;
    cout << "b :" << b << endl;

    b++;
    cout << "after incrementing b :" << endl;
    cout << "a :" << a << endl;
    cout << "b :" << b << endl;

    int num = 10;
    solve(num);
    cout << num;
}