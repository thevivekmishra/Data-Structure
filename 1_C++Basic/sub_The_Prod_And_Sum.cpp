#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;

        prod = prod * digit;
        sum = sum + digit;
    }
    int ans = prod - sum;
    cout << "The difference of product and the sum of the digit is :"<<ans;
    return 0;
}