#include <iostream>
using namespace std;

int main()
{
    // init
    int arr[10];

    cout << "enter the elements of array :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    // printing
    cout << "entered elements are :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}