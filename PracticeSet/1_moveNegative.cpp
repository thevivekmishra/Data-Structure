#include <iostream>
using namespace std;

// 1st approach------------------------
//  void moveNegative(int arr[],int size)
//  {
//      for(int i=0;i<size;i++)
//      {
//        for(int j=i+1;j<size;j++)
//        {
//          if(arr[i]>arr[j])
//          {
//              swap(arr[i],arr[j]);
//          }
//        }
//      }
//  }

// 2nd approach---Dutch national flag algorithm

int moveNegative(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
        }
    }
}

// print
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {-4, 6, 4, -2, -1, 9};
    int size = 6;

    cout << "befor sort:";
    printArray(arr, 6);

    cout << "after sort:";
    moveNegative(arr, 6);
    printArray(arr, 6);

    return 0;
}