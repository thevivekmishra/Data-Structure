#include<iostream>
using namespace std;

//funtion to reverse alternate
void reverseAlternate(int arr[],int n){
    for(int i =0;i<n;i=i+2){
        if(arr[i+1]<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

//print 
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

   cout<<"array is: ";
   printArr(arr,n);
   cout<<endl;

    reverseAlternate(arr,n);
    cout<<"reverse alternate array :";
    printArr(arr,n);

    return 0;
}