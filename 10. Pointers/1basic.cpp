#include<iostream>
using namespace std;


int main(){

    int num = 10;
    int *ptr = &num;

    cout << *ptr << endl;
    cout << &num << endl;

    num++;

    cout << *ptr << endl;
    cout << &num << endl;

    int arr[10] = {8,6,4,5};
    cout << "Address of first block is " << arr << endl;
    cout << "Address of first block is " << &arr[0] << endl;
    cout << *arr << endl;   //2
    cout << (*arr)+2 << endl; //3
    cout << *arr << endl;   //2
    
    cout << *(arr+1) << endl;   //3

    int *pt = arr;  // address of 1st
    cout << *(pt+1) << endl;
    cout << "before value at 1st index *pt is " << *pt << endl;
    *pt = 0;
    cout << "after value at 1st index *pt is " << *pt << endl;







}