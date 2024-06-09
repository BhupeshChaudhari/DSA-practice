#include<iostream>
#include <cstring>
using namespace std;

class A{

    public:
    void func1(){
        cout << "Inside func 1" << endl;
    }
};

class B : public A{

    public:
    void func2(){
        cout << "Inside func 2" << endl;
    }
};

class C : public A{

    public:
    void func3(){
        cout << "Inside func 3" << endl;
    }
};

int main(){

    B b;
    b.func1();
    b.func2();

    C c;
    c.func1();
    c.func3();

}