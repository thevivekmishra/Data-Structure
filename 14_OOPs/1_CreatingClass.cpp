#include<iostream>
using namespace std;

// creating empty class
class Vivek{ 

 };

//non empty class
class Animal {
    int age;
    int height;
    char ch;
};

int main(){
    cout<<"Size of empty class is "<<sizeof(Vivek)<<endl;
    cout<<"Size of non-empty class is "<<sizeof(Animal)<<endl;
    return 0;
}