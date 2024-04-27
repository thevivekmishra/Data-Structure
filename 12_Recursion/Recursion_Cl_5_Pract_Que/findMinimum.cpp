#include <iostream>
#include <climits>
using namespace std;

// function to find min
int minimum(int arr[], int n, int i, int mini)
{
    // base case;
    if (i == n)
    {
        return mini;
    }

    if (arr[i] < mini)
    {
         mini = arr[i];
    }
   return minimum(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int mini = INT_MAX;
    int ans = minimum(arr, n, i, mini);
    cout << "minimum value is :" << ans;

    return 0;
}