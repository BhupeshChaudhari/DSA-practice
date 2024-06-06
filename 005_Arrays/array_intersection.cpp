#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,2,2,3,4};
    int arr1[4] = {2,2,3,3};

    // for(int i=0; i<5; i++){
    //     int element = arr[i];

    //     for(int j=0; j<5; j++){
    //         if(element == arr1[j]){
    //             cout << element << " ";
    //             arr1[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }



    int i = 0, j = 0;

    while(i<6 && j<4){

        if(arr[i] == arr1[j]){
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if(arr[i] < arr1[j]){
            i++;
        }
        else{
            j++;
        }
    }

}