#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// function
// int totalOcc(vector<int> v, int target)
// {
//     int start = 0;
//     int end = v.size() - 1;
//     int count = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == target)
//         {
//             count++;
//         }
//     }
//     return count;
// }

int main()
{
    vector<int> v{2, 4, 5, 5, 5, 5, 5, 5, 5, 7, 8, 9, 10};
    int size = 15;
    int target = 5;

    // cout<<totalOcc(v,target);

    auto firstOcc = lower_bound(v.begin(), v.end(), target);
    cout << "first occurence is at " << (firstOcc - v.begin()) << endl;

    auto lastOcc = upper_bound(v.begin(), v.end(), target + 1) - 1;
    cout << "last occurence is at " << (lastOcc - v.begin()) << endl;

    int totalCount = lastOcc - firstOcc + 1;
    cout << "Total occurance of the number is :" << totalCount;

    return 0;
}