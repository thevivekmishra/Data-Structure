#include<iostream>
using namespace std;

//recursive function to find last occ
void lastOcc(string&s , char x,int i, int& ans){
    //base case
    if(i>=s.size()){
        return;
    }
    if(s[i] == x){
        ans = i;
    }
    lastOcc(s,x,i+1,ans);
}
int main()
{
    string s;
    cout<<"enter any strign :";
    cin>>s;
    char x;
    cout<<"enter char to know the last occ :";
    cin>>x;

    int ans = -1;

    int i =0;

    lastOcc(s,x,i,ans);
    cout<<"last occurence of the char "<<x << "at "<<ans <<endl;
    return 0;
}