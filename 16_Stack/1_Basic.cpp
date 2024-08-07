#include<iostream>
#include<stack>
using namespace std;

int main (){

    //creation 
    stack<int>st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //pop
    st.pop();

    //check element on top
    cout<<"Element on top :"<<st.top()<<endl;

    // check size of stack
    cout<<"Size of stack is :"<<st.size()<<endl; 

    //check stack is empty or not
    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }

    return 0;
}