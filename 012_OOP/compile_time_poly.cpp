#include<iostream>
#include <cstring>
using namespace std;

// Method Overloading


class A{

    public:
    void sayHello(){
        cout << "Hello" << endl;
    }

    void sayHello(string name){
        cout << "Hello "<< name << endl;
    }

};


int main(){

    A a;
    a.sayHello();
    a.sayHello("Bhupesh");


}