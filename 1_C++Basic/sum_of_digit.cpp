#include <iostream>
using namespace std;
int main()
{
    int num, digit;
    cout << "Enter the number to find the sum :";
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }

    cout << "Sum of digit of a number is :" << sum;
    return 0;
}