#include<iostream>
using namespace std;

int main(){

    int arr[40];
    int n;
    bool isSwapped = false;

    cout << "Enter n ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){     // For round

        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false){
            break;
        }
    }

    for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    }
}