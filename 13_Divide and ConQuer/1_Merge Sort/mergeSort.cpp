#include <iostream>
using namespace std;

//function to merge
void merge(int arr[],int s,int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    //create new arrya for len1,len2
    int* left = new int[len1];
    int* right = new int[len2];

    // copy value
    int k = s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

     k = mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndexArray = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndexArray] = left[leftIndex];
            mainIndexArray++;
            leftIndex++;
        }
        else{
            arr[mainIndexArray]= right[rightIndex];
            mainIndexArray++;
            rightIndex++;
        }
    }
    //copy logic for left array
    while(leftIndex < len1){
        arr[mainIndexArray] = left[leftIndex];
        mainIndexArray++;
        leftIndex++;
    }

    // copy logic for right array 
    while(rightIndex < len2){
        arr[mainIndexArray] = right[rightIndex];
        mainIndexArray++;
        rightIndex++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    // s==e -> single element
    // s>e -> invalid array
    if (s >= e)
    {
        return;
    }
    int mid = s+(e-s)/2;
    //solve left part
    mergeSort(arr,s,mid);
    //solve right part
    mergeSort(arr,mid+1,e);
    //merge both sorted array
    merge(arr,s,e);
}

int main()
{
    int arr[] = {5, 2, 6, 8, 1, 9, 5, 3, 10};
    int n = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}