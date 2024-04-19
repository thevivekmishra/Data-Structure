#include <iostream>
#include <algorithm>
using namespace std;

// function custom comparator
bool cmp(char first, char second)
{
    return first > second;
}
int main()
{
    string str = "vivek";
    cout<<"input str :"<<str<<endl;

    sort(str.begin(), str.end()); // output ->eikvv
    cout<<"using sort " << str << endl;

    // custom comparator
    sort(str.begin(), str.end(), cmp);
    cout <<"custorm comp :"<< str << endl;
    return 0;
}