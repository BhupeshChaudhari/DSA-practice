#include<iostream>
using namespace std;


bool binarSearch(int arr[], int s, int e, int key)
{
    // base case
    if(s>e)
        return 0;
    
    int mid = s + (e-s)/2;

    if(arr[mid] == key)
        return true;

    if(key > arr[mid])
        return binarSearch(arr, mid+1, e, key);
    
    else
        return binarSearch(arr, mid, mid-1, key);
}

int main(){

    int arr[5] = {3,6,8,9,10};
    int size = 5;

    int key = 11;

    int s = 0;
    int e = size - 1;

    bool ans = binarSearch(arr, s, e, key);
    
    if(ans)
        cout << "Found";
    else
        cout << "Not found";
}