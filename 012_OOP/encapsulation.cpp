#include<iostream>
#include <cstring>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int height;
    
    public:

    // void setAge(int age){
    //     this->age = age;          // 28 - input value
    //     // age = age;          // garbage value
    // }

    int getAge(){
        return age;
    }

    
};


int main(){

    Student s1;
    // s1.setAge(28);
    cout << s1.getAge() << endl;

}