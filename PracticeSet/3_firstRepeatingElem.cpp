#include <iostream>
using namespace std;

// function
int repeatingElement(int arr[], int size)
{
    for(int i =0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
               cout<< arr[i] <<" ";
               break;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {1, 5, 3, 4, 3, 5, 6};
    int size = 7;

    cout << "First repeating element in the array is :";
    repeatingElement(arr, size);

    return 0;
}