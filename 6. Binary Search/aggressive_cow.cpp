#include<iostream>
#include<algorithm>
using namespace std;


bool isPossibleSol(int arr[], int k, int mid){

    int cowCount = 1;
    int firstPos = arr[0];

    for(int i=0; i<5; i++){

        if(arr[i]-firstPos >= mid){
            cowCount++;
            if(cowCount == k)
            {
                return true;
            }
            firstPos = arr[i];
        }
    }
    return false;
}





int main(){

    int arr[5] = {4,2,1,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr+n);
    int max = arr[0];

    // To find max element
    // for(int i=0; i<5; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout << max;
    // for(int i=0; i<5; i++){
    //     cout << arr[i] << " ";
    // }
    int s = 0;
    int e = arr[4];
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e){

        if(isPossibleSol(arr, 2, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout << "Ans is " << ans;

}