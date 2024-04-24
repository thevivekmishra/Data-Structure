#include <iostream>
using namespace std;

// function
void printArr(int arr[], int size, int i)
{
    // base case
   if(i >= size){
    return;
   }
   cout<<arr[i]<<" ";
   printArr(arr,size,i+1);
    
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int i =0;
    printArr(arr, size, i);
    return 0;
}