#include <iostream>
using namespace std;

class Car {
public:
    string name;
    int age;
    int weight;

    void speedUp() {
        cout << "Speedingup" << endl;
    }

    void breakUp() {
        cout << "Breaking up" << endl;
    }
};

class Scorpio : public Car {
    
};

int main() {
    Scorpio S11;
    S11.speedUp();

    return 0;
}
