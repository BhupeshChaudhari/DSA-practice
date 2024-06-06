#include<iostream>
using namespace std;

int getMax(int arr[], int n){

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
   return max;
}
int getMin(int arr[], int n){

    int min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
   return min;
}


int main(){

    int size;
    cout << "Enter n " ;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    int max = getMax(num, size);
    cout << "Maximum is " << max << endl;
    int min = getMin(num, size);
    cout << "Minimum is " << min << endl;




}