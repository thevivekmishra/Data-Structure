#include <iostream>
#include <vector>
using namespace std;

// recursive function to print all sub array
void printSubArr(vector<int> &arr, int start, int end)
{
    // base case
    if (end == arr.size())
    {
        return;
    }
    // relation for 1st case
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // call
    printSubArr(arr, start, end + 1);
}

void toPrintAllEle(vector<int>&arr)
{
    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printSubArr(arr, start, end);
        cout << endl;
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    toPrintAllEle(arr);

    return 0;
}