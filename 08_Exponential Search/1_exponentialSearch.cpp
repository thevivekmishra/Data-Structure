#include <iostream>
using namespace std;

// function bs
int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
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
// function
int expSearch(int arr[], int size, int target)
{
    if (arr[0] == target) // bcz we start condition from 1 if not then 0*2=0 ifninite loop
    {
        return 0;
    }

    int i = 1;
    while (i < size && arr[i] <= target)
    {
        i = i * 2;
    }

    return binarySearch(arr, i / 2, min(i, size - 1), target);
    //here start = i/2 bcz here using previous value as starting range 
    // is used as the ending range to prevent the end index from exceeding the bounds of the array. If i is larger than size - 1, it means we've gone beyond the end of the array, so size - 1 is used as the maximum end index to prevent an out-of-bounds error. Otherwise, we use i as the end index.
}

int main()
{
    int arr[] = {2, 3, 4, 6, 8, 9, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(int);
    int target = 18;

    int ans = expSearch(arr, size, target);
    cout <<"Element found at index :" <<ans;

    return 0;
}