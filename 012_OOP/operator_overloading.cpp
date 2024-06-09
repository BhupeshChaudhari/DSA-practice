#include<iostream>
#include <cstring>
using namespace std;


class B{

    public:
    int a;

    public:
    void operator+ (B &obj){
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "output " << val2 - val1 << endl;
    }

};

int main(){

    B obj1, obj2;

    obj1.a = 7;
    obj2.a = 6;

    obj1 + obj2;

}