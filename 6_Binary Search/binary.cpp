#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start = 0;
    int end = size - 1;
    
    int mid = start + (end - start)/2;

    while(start <= end){

        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    
    return -1;
}


int main(){

    int arr[6] = {3,4,6,8,9,10};
    int arr1[5] = {1,3,5,7,9};

    int index = binarySearch(arr, 6, 6);
    cout << "Index of 6 is " << index << endl;

    int index1 = binarySearch(arr1, 5, 7);
    cout << "Index of 7 is " << index1 << endl;

}