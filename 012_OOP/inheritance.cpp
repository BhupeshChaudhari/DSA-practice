#include<iostream>
#include <cstring>
using namespace std;

class Human{

    public:
        int weight;
        int age;

    private:
        int height;
    
    // private:
    //     int wbc;

    public:
        int getAge(){
            return age;
        }

        void setWeight(int w){
            this->weight = w;
        }


};

class Male : public Human{

    public:
        string color;

    void sleep(){
        cout << "Male Sleeping";
    }

    int getHeight(){
        return this->height;
    }

};


int main(){

    Male m1;
    // cout << m1.getHeight() << endl;
    // cout << m1.height << endl;
    cout << m1.wbc << endl;




    // Male m1;
    // m1.sleep();
    // cout << endl;
    // cout <<  m1.age << endl ;
    // cout << m1.weight << endl;
    // cout << m1.height << endl;
    // cout << m1.color << endl;

    // cout << m1.wbc << endl;  // NA




}