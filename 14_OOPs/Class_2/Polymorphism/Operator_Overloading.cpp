#include <iostream>
using namespace std;

class Param {
public:
    int val;

    void operator + (Param& Object2) {
        int value1 = this->val;
        int value2 = Object2.val; 
        cout << (value2 - value1);
    }
};

int main() {
    Param object1, object2; 
    object1.val = 7;
    object2.val = 2;

    object1 + object2;
    return 0;
}
