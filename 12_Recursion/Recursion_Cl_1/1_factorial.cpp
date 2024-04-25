#include<iostream>
using namespace std;

//function 
int factorial(int n){

    cout<<"function is called for :"<<n<<endl;
    //base condition-> when to stop
    if(n==1){
        return 1;
    }
    //recursive relation
    int ans = n * factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;

    int ans = factorial(n);

    cout<<"Answer is :"<<ans<<endl;

    return 0;
}