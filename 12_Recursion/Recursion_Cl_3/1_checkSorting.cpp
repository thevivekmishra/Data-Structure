#include<iostream>
using namespace std;

//recursive function
//NOTE -> to save space and time always try to use pass by reference (&)
bool checkSorting(int arr[],int& n,int i){

    //base case suppose i reached at last element 
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return checkSorting(arr,n,i+1);
}
int main(){
    int arr[]={1,2,3,4,5,69,115};
    int n = sizeof(arr)/sizeof(int);
    int i=0;
    bool ans = checkSorting(arr,n,i);
    if(ans){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted ";
    }
    return 0;
}