#include <iostream>
using namespace std;

// function for linear search
bool isElementPresent(int arr[3][4], int row, int col, int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int key = 100;
    
    if (isElementPresent(arr, 3, 4, key))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false";
    }
    return 0;
}