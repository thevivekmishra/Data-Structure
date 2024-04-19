#include<iostream>
#include<string.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch =='a' || ch =='e' || ch =='i'|| ch=='o' || ch=='u';
}

//function to reverse vowels 
string reverseVowels(string str){
    int l = 0;
    int h = str.size()-1;
    while(l<h){
        if(isVowel(str[l]) && isVowel(str[h])){
            swap(str[l],str[h]);
            l++;
            h--;
        }
        else if(!isVowel(str[l])){
            l++;
        }
        else{
            h--;
        }
    }
    return str;
}

int main()
{
    string str;
    cout<<"enter any string :";
    cin>>str;

    cout<<"string after swapping vowels :";
    string ans = reverseVowels(str);
    cout<<ans;
    
    return 0;
}