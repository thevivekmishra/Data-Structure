#include <iostream>
using namespace std;

int main()
{
    // array declaration ---------------------------------------------------
    int arr[5];

    cout << "array declared successfully" << endl;
    cout << "base address of array or starting add. is :" << arr << endl;

    // second method to know the address
    cout << &arr << endl;

    // any particular place add
    cout << arr[2];
    cout << &arr[10]; // if space avl address shown... otherwise error show

    // char type array declaration
    char array[5];
    cout << "char array created successfully" << endl;
    cout << "base address of char array is :" << &array[3] << endl;

    // array initializaton ------------------------------------------------------

    int a[] = {1, 2, 3, 4, 5, 6};
    cout << "array initialize successfully" << endl;

    int b[5] = {1, 3, 4, 5, 9};
    cout << "array init. successfully" << endl;

    // int c[4] = {4,5,6,7,8,8,9, 8, 89, 9, 77};   error -> too mayn init valuse array < values

    return 0;
}

//arr[a] = base address + index * data type value 