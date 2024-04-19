#include <iostream>
#include <limits.h>
using namespace std;

// functin minimum
int getMin(int arr[3][4], int row, int col)
{
    int min = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

// function maximum
int getMax(int arr[3][4], int row, int col)
{
    int max = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    cout << "minimum no is :" << getMin(arr, 3, 4) << endl;
    cout << "maximum no is :" << getMax(arr, 3, 4) << endl;

    return 0;
}