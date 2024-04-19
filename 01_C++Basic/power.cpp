#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the number :";
    cin >> a;
    cout << "enter the power :";
    cin >> b;

    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    cout << ans;
    return 0;
}