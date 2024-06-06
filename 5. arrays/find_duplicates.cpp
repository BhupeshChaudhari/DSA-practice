#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,2,3,4};
    int n = 6;

    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    for(int i=1; i<n; i++){
        ans = ans^i;
    }

    cout << ans;
}