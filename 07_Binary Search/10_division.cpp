#include <iostream>
using namespace std;

// function
double divide(int dividend, int divisor)
{
    if (divisor == 0)
    {
        cout << "Cannot divide by 0." << endl;
        return 1; // Return a non-zero value to indicate error
    }

    int start = 0;
    int end = abs(dividend); // absolute(abs) gives number without any sign

    double ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) < abs(dividend))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // code for decimal point

    double finalAns = ans;
    double precise;
    double step = 0.1;
    cout << "enter the precision limit to know the correct ans :";
    cin >> precise;

    for (double i = 0; i < precise; i++)
    {
        for (double j = finalAns; (j * divisor) <= abs(dividend); j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }

    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {
        return finalAns;
    }
    else
    {
        return -finalAns;
    }
}

int main()
{
    int dividend = 59;
    int divisor = 5;

    double ans = divide(dividend, divisor);
    cout << "Ans is: " << ans;

    return 0;
}