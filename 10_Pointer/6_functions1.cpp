#include <iostream>
using namespace std;

// function
void util(int *ptr)
{
    // ptr = ptr + 1;  //this is pass by value -> here copy is created
    *ptr = *ptr + 1; // this is pass by reference
}
int main()
{

    int b = 10;
    int *ptr = &b;

    cout << "befor function call :-" << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    util(ptr);
    cout << "aftrer calling function :-" << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}