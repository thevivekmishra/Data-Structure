#include <iostream>
#include <vector>
using namespace std;

// function
int firstOcc(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;

    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            // store ans and check left side
            answer = mid;
            end = mid - 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 4, 4, 4, 7, 9};
    int target = 4;

    int ans = firstOcc(v, target);

    cout << "element found at index :" << ans;

    return 0;
}