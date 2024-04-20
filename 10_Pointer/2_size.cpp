#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int*ptr = &a;
    cout<<"size of int is :"<<sizeof(ptr)<<endl;

    char ch = 'a';
    char*c = &ch;
    cout<<"size of char is :"<<sizeof(c)<<endl;

    double dtr = 5.09;
    double*d = &dtr;
    cout<<"size of double is :"<<sizeof(d)<<endl;

    // output of all data type written above is 4 bcz pointer store address


    //pointer copy->
    int ab = 5;
    int *p = &ab;
    //copy 
    int *q = p;
    cout<<"*p = "<<*p<<endl;
    cout<<"*q = "<<*q<<endl;

    return 0;
}