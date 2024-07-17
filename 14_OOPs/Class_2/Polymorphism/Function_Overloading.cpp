#include<iostream>
using namespace std;

class Maths {
    public:
    int sum (int a,int b){
        cout<<"first"<<endl;
        return a+b;
    };
    int sum (int a,int b, int c){
        cout<<"second"<<endl;
        return a+b+c;
    };
    int sum (int a,double b){
        cout<<"double"<<endl;
        return a+b;
    };
    int sum (int a , float b){
        cout<<"float"<<endl;
        return a+b+100;
    };

};
int main(){
  Maths obj;
  cout<<obj.sum(10,5);
  cout<<obj.sum(10,5,5);
  cout<<obj.sum(10,5.5);
  cout<<obj.sum(19,5.5f);
  return 0;
}