#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    int key;
    cout << "enter element you want to search :";
    cin >> key;

    // linear search
    if (find(arr, size, key))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}