#include<iostream>
using namespace std;

//function 
int fibonacci(int n){
    //base case -> when to stop
    if(n == 1){
      //first term
        return 0;
    }
    if(n == 2){
        //second term
        return 1;
    }
    //recursive relation 
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter the term you want to know the ans ";
    cin>>n;

    int ans = fibonacci(n);
    cout<<n<<" th term is "<<ans;

    return 0;
}