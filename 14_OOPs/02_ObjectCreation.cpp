//Object creation is of two types 1.Static and 2.Dynamic 

//STATIC object creation

#include<iostream>
using namespace std;

class Animal{
    //state or properties

    private:
    int weight;
    //we cannot directly access private data member to access we use getter & setter

    public:
    int age;
    int name;

    //behaviour or function 
    void eat(){
    cout<<"eating"<<endl;
    };

    void sleep(){
    cout<<"sleeping"<<endl;
    };

    
    int getWeight(){
        return weight;
    }

    int setWeight(int w){
        weight = w;
    }  
};

int main(){

    Animal xyz;  //Animal type of object whose name is xyz

    //accessing age of xyz (.)
    cout <<"age of xyz :"<<xyz.age<<endl;     //op 12334 garbage value
    cout<<"name of xyz :"<<xyz.name<<endl;

    //accessing member function 
    xyz.eat();  //op eating
    xyz.sleep();  //op sleeping

    //accessing private member
    xyz.setWeight(101);
    cout<<"weight : "<<xyz.getWeight() <<endl;   //op 101



    //DYNAMIC MEMORY ALLOCATION 
    // Animal* abc = new Animal ;
    // (*abc).age =15;
    // (*abc).name="cat";

    // //alternate 
    // abc->age=15;
    // abc->name="cat"



    return 0;
}