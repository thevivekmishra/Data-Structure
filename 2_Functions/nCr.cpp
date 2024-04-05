#include <iostream>
using namespace std;

int fact(int x)
{
    int i = 1;
    int factorial = 1;
    while (i <= x)
    {
        factorial = factorial * i;
        i++;
    }
    return factorial;
}

int main()
{
    int n,r;
    cout << "enter the value of n:";
    cin >> n;
    cout << "enter the value of r:";
    cin >> r;

    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << "nCr is :" << ans;
    return 0;
}