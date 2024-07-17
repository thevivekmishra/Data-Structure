#include<iostream>
using namespace std;

class Animal {
public:
    int age;
    int weight;

    void eat() {
        cout << "eating" << endl;
    }
};

int main() {
    Animal abc;
    abc.eat(); 
    return 0;
}
