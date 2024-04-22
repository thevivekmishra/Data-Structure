#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> Sieve(int n)
{
    // create sieve array of n size telling is prime
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    // for (int i = 2; i <= n; i++)
    for (int i = 2; i <= sqrt(n); i++) // optimize
    {
        if (sieve[i] == true)
        {
            // int j = i * 2;
            int j = i * i; // optimize
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

int main()
{
    vector<bool> sieve = Sieve(21);
    for (int i = 0; i <= 21; i++)
    {
        if (sieve[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}