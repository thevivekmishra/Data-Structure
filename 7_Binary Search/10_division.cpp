#include <iostream>
using namespace std;

// function
int divide(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend); // absolute(abs) gives number without any sign

    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (abs(mid * divisor) == abs(dividend))
        {
            return mid;
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
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{
    int dividend = 203;
    int divisor = 5;

    if (divisor == 0)
    {
        cout << "Cannot divide by 0." << endl;
        return 1; // Return a non-zero value to indicate error
    }
    int ans = divide(dividend, divisor);
    cout << "Ans is: " << ans;

    return 0;
}