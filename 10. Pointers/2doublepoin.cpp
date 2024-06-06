#include<iostream>
using namespace std;

void update(int **p){

    // p = p + 1;

    // *p = *p + 1;

    **p = **p + 1;

}

int main(){

    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;

    // cout << ptr << " " << &i << endl;
    // cout << *ptr << endl;

    // cout << ptr2 << " " << &ptr << endl;
    // cout << *ptr2 << endl;



    cout << "Before " << i << endl;
    cout << "Before " << ptr << endl;
    cout << "Before " << ptr2 << endl;
    update(ptr2);
    cout << "After " << i << endl;
    cout << "After " << ptr << endl;
    cout << "After " << ptr2 << endl;


}