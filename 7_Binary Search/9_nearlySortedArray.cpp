// nearly sorted array means that the element present inside the unsorted array are
// at the index of either (n-1) or (n) or(n+1) where n is the index of the element
// in the sorted array----
// if element in sorted array are at index 4 then it must be at index 3/4/5 in nearly sorted array

#include <iostream>
#include <vector>
using namespace std;

// function
int searchInNearlySortedArray(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // there are three possible place where we can find the target
        if (arr[mid] == target)
            return mid;
        if (mid - 1 > 0 && arr[mid - 1] == target)  
            return mid - 1;
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
            return mid + 1;

        // checking left part
        if (arr[mid] < target)
        {
            start = mid + 2; // bcz we already checked mid+1 place
        }
        // checking right part
        else
        {
            end = mid - 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 80;

    int ans = searchInNearlySortedArray(arr, target);
    cout << "index of " << target << " is " << ans;

    return 0;
}
