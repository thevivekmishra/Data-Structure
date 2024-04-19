#include <iostream>
using namespace std;

// function
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[] = {3, 7, 2, 3, 99, 56, 9, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);

    cout << "sorted array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}