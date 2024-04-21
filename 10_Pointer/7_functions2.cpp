#include<iostream>
using namespace std;

//funciton 
void solve(int** ptr){
    // ptr = ptr + 1;   //12
    // *ptr = *ptr +1;  //12
    **ptr = **ptr + 1;  //13
}
int main()
{
    int x = 12;
    int* p = &x;
    int **q = &p;

    solve(q);
    
    cout<<x<<endl;

    return 0;
}