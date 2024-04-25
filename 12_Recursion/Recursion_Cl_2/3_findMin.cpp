#include <iostream>
#include <climits>
using namespace std;

// function
void findMin(int arr[], int size, int i, int &min)
{
    // base case
    if (i >= size)
    {
        return;
    }
    if (arr[i] < min)
    {
        min = arr[i];
    }
    findMin(arr, size, i + 1, min);
}

int main()
{
    int min = INT_MAX;
    int arr[] = {10, 6, 4, 9, 22, 47, 109};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    findMin(arr, size, i, min);
    cout << "minimum number in an array is :" << min;

    return 0;
}
