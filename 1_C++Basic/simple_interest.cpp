#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    cout << "Enter Principle (P) :";
    cin >> p;
    cout << "Enter rate of interest (R) :";
    cin >> r;
    cout << "Enter Time (T) :" ;
    cin >> t;

    int SI = (p * r * t) / 100;
    cout << "SI of the given input is :" << SI;
    return 0;
}