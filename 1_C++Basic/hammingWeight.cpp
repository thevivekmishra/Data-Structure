#include <iostream>
using namespace std;

int main() {
    int n = 1, num;
    cout << "Enter any number: ";
    cin >> num;
    int count = 0;
    
    while (num != 0) { 
        if (num & 1) {
            count++;
        }
        num >>= 1; 
    }
    
    cout << "Number of set bits in the binary representation: " << count << endl;
    return 0;
}
