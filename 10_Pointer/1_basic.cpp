#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;

    cout<<"int a = "<<a<<endl;
    cout<<"address of a :" << &a <<endl;
    cout<<"address of b :"<< &b <<endl;

    //creating pointer
    int *ptr = &a;
    //access the value ptr is pointing to 
    cout<<"value ptr is pointing to (*ptr) :"<<*ptr<<endl; // it print the value present on the stored address 
    cout<<"value stored at location in ptr is (ptr):"<<ptr<<endl;  //it store the address of a so the address of a is printing
    cout<<"address of the ptr is (&ptr) :"<<&ptr<<endl;
    return 0;
}