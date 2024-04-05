#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[10] = {1, 89, 34, 56, 33, 46, 795, 344, 99, 90};
    int size = 10;

    int max = INT_MIN ; //#include<limits.h>

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"maximum no in the array is :"<<max;
    return 0;
}