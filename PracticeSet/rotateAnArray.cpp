#include <iostream>
using namespace std;

//print
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// function to rotate an array
void rotateArray(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < 3; i++)
    {
       int temp = arr[end];
        for (int j = end; j > start; j--) {
            arr[j] = arr[j - 1];
        }
        arr[start] = temp;
        
    }
    printArr(arr,n);

}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int target = 3;

    rotateArray(arr, n, target);

    return 0;
}