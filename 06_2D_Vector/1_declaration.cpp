#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    vector<int> a{1, 2, 3};
    vector<int> b{4, 6, 7,5,6,7};
    vector<int> c{5, 9, 7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++) // if the elements size aren't same -> arr[i].size()
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}