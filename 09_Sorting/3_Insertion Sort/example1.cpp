#include <iostream>
using namespace std;

// function
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {3, 6, 8, 1, 3, 2, 88, 13, 90, 10};
    int n = sizeof(arr) / sizeof(int);
    // cout<<n<<endl;

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}