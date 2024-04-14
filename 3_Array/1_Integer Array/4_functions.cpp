#include <iostream>
using namespace std;

// int inc(int a)
// {
//     a++;
//     cout << "function :" << a << endl;
// }
// int main()
// {
//     int a = 10;
//     inc(a);
//     cout << a << endl;
//     return 0;
// }

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void incArray(int arr[], int size)
{
    arr[0] = arr[0] + 10;

    cout<<"function :";
    printArray(arr, size);
}

int main()
{
    int arr[] = {5, 6};
    int size = 2;
    incArray(arr,size);
    printArray(arr, size);
    return 0;
}

//hence array work on pass by reference 