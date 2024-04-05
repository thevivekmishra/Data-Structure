#include <iostream>
using namespace std;

//1 -> prime no
//0 -> not a prime no 
bool isPrime(int x)
{
    for (int i = 2; i < x; i++) // i=2 bcz 1 is already a factor
    {
        if (x % i == 0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main()
{
    int n;
    cout << "enter no to check weather it is prime or not :";
    cin >> n;
    int ans = isPrime(n);
    cout << "Ans is " << ans;
    return 0;
}