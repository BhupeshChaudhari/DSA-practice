#include<iostream>
using namespace std;

    long long int sqrtInt(int n){

        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1;

        while(s<=e){

            long long int sq = mid*mid;

            if(sq == n){
                return mid;
            }
            if(sq < n){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePercision(int n, int precision, int intPart){

    double factor = 1;
    double ans = intPart;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }

    return ans;

}

int main(){

    int n;
    cout << "Enter num ";
    cin >> n;

    int intPart = sqrtInt(n);
    cout << "ans is : " << intPart << endl;
    cout << "more precise ans " << morePercision(n, 3, intPart);

}