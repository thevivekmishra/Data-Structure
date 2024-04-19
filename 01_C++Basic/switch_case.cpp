#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number :";
    cin >> a;
    cout << "enter second number :";
    cin >> b;

    char op;
    cout << "Enter operator :";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b);
        break;

    case '%':
        cout << (a % b);
        break;
    default:
        cout << "Please insert the valid operator";
        break;
    }
}