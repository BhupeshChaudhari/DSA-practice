#include<iostream>
using namespace std;



int main(){

    int ans = 0;
    int arr[7] = {5,7,6,7,5,1,6};

    for(int i=0; i<7; i++){
        ans = ans^arr[i];
    }

    cout << "Unique element is " << ans << endl;

}