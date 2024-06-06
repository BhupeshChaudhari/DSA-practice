#include<iostream>
using namespace std;


bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);


    // for sum
    // if(size == 0)
    //     return 0;
    
    // return arr[size-1] + isSorted(arr, size-1);
}


int main(){

    int arr[5] = {3,6,7,9,10};
    int size = 5;

    int ans = isSorted(arr, size);

    if(ans)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted";

    // cout << isSorted(arr, size);
}