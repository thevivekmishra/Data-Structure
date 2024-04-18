#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={0,2,7,9,4,22,65,8,1,100};
    int n = sizeof(arr)/sizeof(int);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if (arr[i] < min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    cout<<"min :"<<min<<endl;
    cout<<"max :"<<max<<endl;
    return 0;
}