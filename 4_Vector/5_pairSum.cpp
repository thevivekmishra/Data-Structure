#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 30, 50, 60, 40, 70, 80, 90};
    int sum = 100;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "+" << arr[j] << "=" << "10" << " ";
            }
        }
    }
    return 0;
}