#include<iostream>
#include <cstring>
using namespace std;

class Animal{

    public:
        int age;
        int weight;
    
    public:
    void speak(){
        cout << "speaking" << endl;
    }
};


class Dog: public Animal{

};


int main(){

    Dog d;
    Animal a;
    d.speak();
    d.age = 12;
    d.weight = 39;
    cout << d.age << endl;
    cout << d.weight << endl;
    cout << a.age << endl;

}