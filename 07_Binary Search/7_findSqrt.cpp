#include <iostream>
using namespace std;

// function
int findSqrt(int n)
{
    int start = 0;
    int end = n;
    int target = n;
    int ans = -1; // initilize

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == target)
        {
            return mid;
        }
        if (mid * mid < target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // logic to print decimal value

    double finalAns = ans;
    double step = 0.1;

    int precise;
    cout << "enter the precise limit :";
    cin >> precise;

    for (double i = 0; i < precise; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10; // for 0.01 .....
    }

    cout << "Ans is " << finalAns << endl;

    return 0;
}

int main()
{
    int n;
    cout << "enter the no. you want to know the sqrt :";
    cin >> n;

    int ans = findSqrt(n);
    cout << "sqrt of the no is :" << ans;

    return 0;
}