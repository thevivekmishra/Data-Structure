#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    cout << "2D array created successfully";

    // initialization
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printing particular elements of an 2d array
    cout << endl;
    cout << brr[1][2] << endl;
    cout << brr[2][2] << endl;
    cout << brr[5][5] << endl; // output - garbage value

    // printing all element row wise
    cout << "Printing row wise -" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    // printing coulum wise
    cout << "printing column wise- " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}