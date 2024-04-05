#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. till you want to print the sum : ";
    cin >> n;
    int num = 1;
    int sum = 0;
    // while (num <= n)
    // {
    //     sum = sum + num;
    //     num++;
    // }
    for (num = 1; num <= n; num++)
    {
        sum = sum + num;
    }
    cout << sum;
    return 0;
}