#include<iostream>
using namespace std;


int main(){

    int arr[4][3];
    int sum = 0;

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

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            
            sum += arr[i][j];
        }

        cout << sum << " ";
        sum = 0;
    }

    cout << endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            
            sum += arr[j][i];
        }

        cout << sum << " ";
        sum = 0;
    }
}