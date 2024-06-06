#include<iostream>
using namespace std;


bool isFound(int arr[], int key, int n)
{
    if(n == 0)
        return 0;

    if(arr[0] == key)
        return true;
    else
        return isFound(arr+1, key, n-1);
}


int main(){

    int arr[5] = {3,4,5,6,5};
    int n = 5;
    int key = 10;

    bool ans = isFound(arr, key, n);
    if(ans)
        cout << "Found";
    else
        cout << "Not found";
}