#include <iostream>
#include <vector>
using namespace std;

// function
int lastOcc(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;

    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            answer = mid;
            start = mid + 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> v{2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 8, 9, 10};
    int size = 13;
    int target = 5;

    int ans = lastOcc(v, target);
    cout << "last occurence is at index :" << ans;

    return 0;
}