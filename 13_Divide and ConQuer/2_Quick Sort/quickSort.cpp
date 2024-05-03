#include <iostream>
#include<algorithm>
using namespace std;

int partition(int arr[], int s, int e)
{
    // chose pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    // find right position for pivot elemen
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    // now we have right position of pivot so place it rightIndex 
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //when left has smaller and right has greate element 
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<= pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
        return pivotIndex;
    }
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partion logic
    int p = partition(arr, s, e);

    // recursive call
    // pivot element -> left side
    quickSort(arr, s, p - 1);
    // pivot element -> right side
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {6, 3, 1, 4, 7, 8, 33, 21, 12};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}