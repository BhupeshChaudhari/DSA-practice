#include<iostream>
#include <cstring>
using namespace std;

class Animal{

    public:
        int age;
        int weight;
    
    public:
    void bark(){
        cout << "barking" << endl;
    }
};

class Human{

    public:
        string color;

        public:
        void speak(){
            cout << "speaking" << endl;
        }

};

class Hybrid : public Animal, public Human{

};

int main(){

    Hybrid h;
    h.speak();
    h.bark();

}