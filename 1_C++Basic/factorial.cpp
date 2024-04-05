#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int fact = 1;
    cout << "Enter no to know the factorial :";
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter a positive no ";
        return 1;
    }
    if (n == 0)
    {
        cout << "Factorial of 0 is 1";
        return 0;
    }
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    cout << fact;
    return 0;
}