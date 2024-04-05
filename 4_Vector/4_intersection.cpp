#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 3, 3, 4, 5};
    vector<int> brr{3, 3, 3, 4, 5, 6, 7};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[i] = -1 ; //marked if traversed and print
                ans.push_back(arr[i]);
            }
        }
    }
    cout << "Intersection :";
    // for (int k = 0; k < ans.size(); k++)
    // {
    //     cout << ans[k] << " ";
    // }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}