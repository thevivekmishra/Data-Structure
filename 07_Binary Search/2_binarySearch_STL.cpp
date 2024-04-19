#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int main()
// {
//     vector<int>v{2,4,6,8,9,12,14,17,20};

//     if(binary_search(v.begin(),v.end(),6))
//     {
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }


int main()
{
    int arr[7]={2,3,4,7,9,10,20};
    int size =7;
    
    if(binary_search(arr,arr+size,10))
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}

