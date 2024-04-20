#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2,13,5,7,18,9,10};

    cout<<"arr :"<<arr<<endl;
    cout<<"&arr :"<<&arr<<endl;
    cout<<"&arr[0] :"<<&arr[0]<<endl;
    cout<<"arr[0] :"<<arr[0]<<endl;

    int *p = arr;
    cout<<"&p :"<<&p<<endl;  
    cout<<"p :"<<p<<endl;
    cout<<"*p :"<<*p<<endl;

    cout<<*arr<<endl; //2
    cout<<*(arr) +1<<endl; //3
    cout<<*(arr +1)<<endl; //13
    cout<<*(arr + 2)<<endl; //5

    cout<<"------------"<<endl;
    
    int brr[10];
    cout<<sizeof(brr)<<endl;

    int *ptr = brr;
    cout<<sizeof(ptr)<<endl;

    return 0;
}