#include <iostream>
using namespace std;

// creatin function
bool isEven(int a)
{
    if (a & 1)
    {
        return 0; // 0 for odd
    }
    else
    {
        return 1; // 1 for even
    }
}
int main()
{
    int n;
    cout << "Enter the number to check even or odd :";
    cin >> n;
    int ans = isEven(n);
    cout << "Answer is :" << ans;
    return 0;
}