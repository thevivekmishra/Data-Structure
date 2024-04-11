#include <iostream>
using namespace std;

// function
// int findDuplicate(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 return arr[i];
//                 break;
//             }
//         }
//     }
//     return -1;
// }

//less time complexity
int findDuplicate(int arr[],int size)
{
    while(arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}

int main()
{
    int arr[5] = {3,1,3,4,2};
    int size = 5;

    cout << "Duplicate no is :"<<findDuplicate(arr, size);
    return 0;
}