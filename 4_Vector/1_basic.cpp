#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;

    cout << "size of vector :" << arr.size() << endl;
    cout << "capacity of vector :" << arr.capacity() << endl;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<"ans :"<<ans<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove or delete elements
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    //---------------------------------------------------
    vector<int> brr(10);
    cout << "size of brr :" << brr.size() << endl;
    cout << "capacity of brr :" << brr.capacity() << endl;
    // output = size:10 capacity:10

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " "; // output = 0000000000
    }
    cout << endl;

    //-----------------------------------------------------
    vector<int> crr(10, -1); // all 10 elements are init with -1

    cout << "size of crr :" << brr.size() << endl;
    cout << "capacity of crr :" << brr.capacity() << endl;
    // output = size 10 capacity =10

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " "; // output = -1-1-1-1-1-1-1-1-1-1
    }
    cout << endl;

    //------------------------------------------------------
    int n;
    cout << "enter the size of vector :";
    cin >> n;

    vector<int> drr(n);
    cout << "size of drr :" << drr.size() << endl;
    cout << "capacity of drr :" << drr.size() << endl;

    //--------------------------------------------------------

    vector<int>v{10,20,30,40,50};
    for(int i =0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}