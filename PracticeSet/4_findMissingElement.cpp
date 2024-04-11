#include <iostream>
using namespace std;

// funciton
// int findMissingEle(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int index = abs(arr[i]);
//         if (arr[index - 1] > 0)
//         {
//             arr[index - 1] *= -1;
//         }
//     }
//     // for(int i =0;i<size ;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > 0)
//         {
//             cout << "Missing element is :" << i + 1 << endl;
//         }
//     }
// }

// sort and swap method
int findMissingEle(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            ++i;
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i];
    // }
    // cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1;
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 5, 3, 4};
    int size = sizeof(arr) / sizeof(int);

    findMissingEle(arr, size);

    return 0;
}