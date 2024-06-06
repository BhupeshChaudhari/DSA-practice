#include<iostream>
using namespace std;

int main(){

    int arr[4][3];

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
  
           cin >> arr[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
  
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    for(int j=0; j<3; j++){

        if(j&1){
            for(int i=3; i>=0; i--){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int i=0; i<4; i++){
                cout << arr[i][j] << " ";
            }
        }
    }

}