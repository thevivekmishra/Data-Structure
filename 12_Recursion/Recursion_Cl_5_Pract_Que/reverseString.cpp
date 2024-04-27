#include<iostream>
using namespace std;

//function to reverse strign using recursion
void reverseString(string& s,int start,int end){
    //base case
    if(start >= end){
        return;
    }
     swap(s[start],s[end]);

     reverseString(s,start+1,end-1);
}
int main(){
string s;
cout<<"enter any string :";
cin>>s;

int i =0;

reverseString(s,0,s.size()-1);  // start= 0 and end = s.size()-1;

cout<<s<<endl;
return 0;
}