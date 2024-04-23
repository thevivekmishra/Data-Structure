#include<iostream>
using namespace std;

//recursive function 
void printCounting(int n){
    //base case -> when to stop
    if(n == 0){
        return;
    }
    //processing
    cout<<n<<endl;
    
    //recursive relation
    printCounting(n-1);
}
int main(){
    int n;
    cout<<"enter any number :";
    cin>>n;

    printCounting(n);

    return 0;
}