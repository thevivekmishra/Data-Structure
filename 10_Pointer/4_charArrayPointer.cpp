#include<iostream>
using namespace std;

int main(){

    char ch[100] = "vivek";
    char *c = ch;
    // cout<<c;

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*ch<<endl;

    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;

cout<<"---------------"<<endl;
    char name[19] ="hellovivek";
    char *ctr = &name[0];

    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<*(name +3)<<endl;
    cout<<ctr<<endl;
    cout<<&ctr<<endl;
    cout<<*(ctr+3)<<endl;
    cout<<ctr+2<<endl;
    cout<<*ctr<<endl;
    cout<<ctr+10 <<endl;

    cout<<"-------------"<<endl;

    char cha = 'v';
    char* chptr = &cha;
    cout<<chptr<<endl;
 return 0;
}
