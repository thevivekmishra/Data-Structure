#include<iostream>
using namespace std;

//recursive function to check palindrome;
bool checkPalindrome(string&str,int start,int end){
    //base case
    if(start >= end){
        return true ;
    }

    if(str[start] != str[end]){
        return false;
    }
    checkPalindrome(str,start+1,end-1);
}

int main(){
    string str;
    cout<<"enter any string to check palindrome :";
    cin>>str;
    int start  =0;
    int end= str.length()-1;

    checkPalindrome(str,start,end);
   
   if(checkPalindrome(str,start,end)){
    cout<<"enterd string is palindrome"<<endl;
   }
   else{
    cout<<"entered string is not palindrome"<<endl;
   }
    return 0;
}