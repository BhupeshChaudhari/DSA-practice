#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){

    for(int i=0; i<n; i=i+2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[6] = {1,2,5,7,8,7};
    int arr1[9] = {3,2,5,7,6,7,8,3,1};

    swapAlternate(arr, 6);
    cout << endl;
    swapAlternate(arr1, 9);

}