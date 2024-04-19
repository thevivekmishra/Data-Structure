#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row = 3;
    int col = 4;

    vector<vector<int> >arr (row, vector<int> (col,0));

    for(int i =0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++) //row size:3 ,col size:4  thats why arr[i].size()
         {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}