#include<iostream>
using namespace std;

class Animal{
    //state or properties
    private:
    int weight;

    public:
    int age;
    string type;

    //default constructor -> it override the invoked constructor and print 
    //remember constructor name is same as class name 
    Animal(){
        cout<<"constructor called "<<endl;
    }

   //Parametrized constructor -> it takes parameter
   Animal(int age){
    this->age = age;
    cout<<"Parametrized constructor 1 called "<<endl;
   }

   //copy constructor
   Animal(Animal &obj){
    this->age = obj.age;
    this->weight = obj.weight;
    this->type = obj.type;
    cout<<"I am inside copy constructor "<<endl;
   }

   //Destructor
   ~Animal(){
    cout<<"I am inside destructor"<<endl;
   }

    //behaviour
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
};

int main(){
    //creating object
    Animal a; //static
    Animal*b = new Animal(); //dynamic

   //calling parametrized constructor 1
    Animal c(10);
    Animal*d = new Animal(100);

   //copy constructor 
   Animal x = a;

   Animal *z= new Animal();
   z->age =10;
   delete z;

    return 0;
}