#include<iostream>
using namespace std;

class Car {
    public:
    int age;
    int weight;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    };
};

class Scorpio : public Car {

};

class Bolero : public Car {

};

int main(){
    Scorpio S11;
    S11.speedUp();

    Bolero ZLX;
    ZLX.speedUp();

    return 0;
}