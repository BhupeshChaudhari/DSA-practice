#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << "Printing the array" << endl;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int num[15];
    cout << num[0];
    cout << num[5] << endl;

    int arr[12] = {1,4,5};

    printArray(arr, 12);
    
}