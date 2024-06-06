
// prbm - First and last occurrence of element

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;

        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;

        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int even[5] = {1,3,8,8,9};
    cout << "First Occurrence of 3 is  " << firstOcc(even, 5, 3) <<endl;
    cout << "Last Occurrence of 8 is  " << lastOcc(even, 5, 8) <<endl;

}