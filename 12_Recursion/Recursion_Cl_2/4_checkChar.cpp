#include<iostream>
#include<string.h>
using namespace std;

//function 
bool checkKey(string str ,int n,int i,char key){
    //base case
    if(i>=n){
        return 0;
    }
    // recurrence relation
    if(str[i] == key){
        return true;
    }
    return checkKey(str,n,i+1,key);
}

int main(){
    string str = "vivek";
    int n = str.length();

    char key = 'o ';
 
    int i =0;
    bool ans = checkKey(str,n,i,key);
    cout<<ans;
    return 0;
}