#include<iostream>
using namespace std;

//function to find the peak index in an mountain array 
int peakIndex(int arr[],int n){
    int start =0;
    int end = n-1;
    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return end;
    // return start;
}
int main(){
int arr[]={7,8,9,10,6,5,4,3};
int n = sizeof(arr)/sizeof(int);


int ans = peakIndex(arr,n);
cout<<"peak index of mountain array is :"<<ans;

return 0;
}