#include<iostream>
using namespace std;


bool isPossibleSol(int arr[], int n, int m, int mid){

    int studCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){

        if((pageSum+arr[i]) <= mid){
            pageSum += arr[i];
        }

        else{
            studCount++;
            if(studCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}


int main(){

    int arr[4] = {3,4,5,6};
    int s = 0;
    int sum = 0;

    for(int i=0; i<4; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){

        if(isPossibleSol(arr,5,2,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{

            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }

    cout << "Ans is : " << ans;

}