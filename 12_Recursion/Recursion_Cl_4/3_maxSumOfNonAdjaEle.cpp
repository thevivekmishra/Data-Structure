#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//function for max sum of non adjacent element ---- try to use pass by reference (&)
void solve(vector<int>&arr,int i ,int sum ,int& maxi){
    //base case
    if(i >= arr.size()){
        //maxi update
        maxi = max(sum,maxi);
        return; 
    }
    //element include
    solve(arr,i+2,sum+arr[i],maxi); //i+2 because we want non adjacet
    //element exclude
    solve(arr,i+1,sum,maxi); //i+1 bcz we skip the previous element 
}
int main(){
    vector<int>arr{2,1,4,9};
    int sum =0;
    int maxi = INT_MIN;
    int i =0;

    solve(arr,i,sum,maxi);
    
    cout<<"maximum sum of non adjacent element is :"<<maxi<<endl;
    return 0;
}