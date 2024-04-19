#include <iostream>
using namespace std;

/*int main()
{
    int arr[5];
    cout << "enter the elements of array :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "entered elements are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }

    // logic for printing the double
    cout << "Twice of the enterd value are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] * 2 << endl;
    }
    return 0;
}*/

int main()
{
    int a[5];
    cout << "enter the elements of array :";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // converting value to 1
    cout << "changing values :";
    for (int i = 0; i < 5; i++)
    {
        a[i] = 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}