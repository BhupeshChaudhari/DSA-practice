#include<iostream>
#include <cstring>
using namespace std;


class Animal{

    public:
    void speak(){
        cout << "Speaking" << endl;
    }

};

class Dog : public Animal{

    public:
    void speak(){
        cout << "barking" << endl;
    }

};

int main(){

    Dog d;
    d.speak();

}