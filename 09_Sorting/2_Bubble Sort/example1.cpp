#include <iostream>
using namespace std;

// function
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main()
{
    int arr[] = {5, 7, 9, 3, 1, 5, 2, 77, 10};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}