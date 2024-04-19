#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];

    cout << "enter the elements of array :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // logic row sum
    cout << "row wise sum " << endl;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " " << endl;
    }

    // column wise sum
    cout << "column wise sum " << endl;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }

    return 0;
}