#include <iostream>
using namespace std;

// function
bool searchElement(int arr[3][3], int size, int row, int col, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int rowIndex = mid / col;
        int colIndex = mid % col;
        int element = arr[rowIndex][colIndex];

        if (element == key)
        {

            cout << "at :rowIndex :" << rowIndex << endl;
            cout << "colindex :" << colIndex << endl;

            return true;
        }
        if (element > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    int row = 3;
    int col = 3;
    int size = row * col;

    int arr[3][3];

    cout << "enter the elements of an 2D array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "enter the element to search :";
    cin >> key;

    int answer = searchElement(arr, size, row, col, key);
    if (answer)
        cout << "Element found.";
    else
        cout << "Element not found.";

    return 0;
}