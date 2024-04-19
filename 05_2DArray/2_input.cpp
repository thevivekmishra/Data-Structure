#include <iostream>
using namespace std;

int main()
{
    int arr[4][3];

    cout << "enter the elements of array :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "entered elements are :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
         cout<<endl;
    }
   
    return 0;
}