#include <iostream>
#include <vector>
using namespace std;

// recursive function for binary search
//try to use pass by reference to minimize space and time 
int binarySearch(vector<int>& v, int n, int s, int e, int& key)
{

    int mid = s + (e - s) / 2;
    // base case
    if (s > e)
    {
        return -1;
    }
    if (v[mid] == key)
    {
        return mid;
    }
    if (v[mid] < key)
    {
        return binarySearch(v, n, mid + 1, e, key);
    }
    else
    {
        return binarySearch(v, n, s, mid - 1, key);
    } 
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = v.size();
    int key = 97;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    int ans = binarySearch(v, n, s, e, key);
    cout << "element found at index :" << ans;

    return 0;
}