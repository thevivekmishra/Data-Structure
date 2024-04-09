#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{2, 3, 4, 5, 5, 5, 5, 5, 5, 7, 8, 9};

    int target = 5;

    auto firstOcc = lower_bound(v.begin(), v.end(), target);
    cout << "first occurence is at " << (firstOcc - v.begin()) << endl;

    auto lastOcc = upper_bound(v.begin(), v.end(), target + 1) - 1;
    cout << "last occurence is at " << (lastOcc - v.begin());

    return 0;
}