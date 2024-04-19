#include <iostream>
using namespace std;
int main()
{
    int num, n;
    cout << "Enter the number to reverse :";
    cin >> num;
    int ans = 0;
    while (num != 0)
    {

        int digit = num % 10;
        num = num / 10;
        ans = ans * 10 + digit;
    }
    cout << "Reverse of the number is :" << ans;
    return 0;
}