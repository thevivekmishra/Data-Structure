#include <iostream>
using namespace std;

// function to sort
void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 1, 0, 1, 2, 0};

    cout << "sorted array :" << endl;
    sort(arr, 6);
    printArray(arr, 6);
    return 0;
}