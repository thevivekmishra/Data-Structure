#include <iostream>
using namespace std;

// function
int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // int mid = (start + end) / 2;  //integer overflow occurs
        int mid = start + (end-start)/2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 8, 9, 11, 15, 17, 20};
    int size = 10;
    int target = 9;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "element found at index " << result;
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}