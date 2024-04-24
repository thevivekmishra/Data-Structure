// leetcode problem no 70 

#include<iostream>
using namespace std;

//function
int climbingStairs(int n){
    //base case 
    if(n==0 || n==1){
        return 1;
    }
    return climbingStairs(n-1)+climbingStairs(n-2);
}
int main(){
    int n;
    cout<<"enter the stair no :";
    cin>>n;

    int ans = climbingStairs(n);

    cout<<"Total ways to reach at stair no. "<<n <<" is "<<ans;

    return 0;
}