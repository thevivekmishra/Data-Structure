#include <iostream>
using namespace std;

// function
int findDuplicate(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
                break;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[6] = {1, 4, 7, 3, 6, 1};
    int size = 6;

    cout << "Duplicate no is :";
    findDuplicate(arr, size);
    return 0;
}