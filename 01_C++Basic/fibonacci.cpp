#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0;
    int b = 1;
    cout << "Enter the number :";
    cin >> n;
    cout << a <<" ";
    cout << b <<" ";
    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
    return 0;
}