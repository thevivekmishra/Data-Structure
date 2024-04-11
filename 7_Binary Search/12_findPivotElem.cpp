#include <iostream>
#include <vector>
using namespace std;

// function
int pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(start == end)
        {
            return start;
        }
        if (mid <= end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 > start && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[start] > arr[mid])
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
    vector<int> arr{9, 10, 2, 4, 6, 7, 8};

    int ans = pivot(arr);
    cout << "Pivot element is :" << arr[ans]<<endl;
    cout<<"Index is :"<<ans;

    return 0;
}