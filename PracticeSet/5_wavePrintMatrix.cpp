#include <iostream>
#include <vector>
using namespace std;

// function
int wavePrint(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();

    for (int startCol = 0; startCol < col; startCol++)
    {
        //even top -> bottom print
        if ((startCol&1)==0)
        {
            for(int i=0;i<col;i++)
            {
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            for(int i=col-1;i>=0;i--)
            {
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "wave print :" << endl;
    wavePrint(v);

    return 0;
}