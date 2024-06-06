#include<iostream>
using namespace std;

// To calculate the ways to reach nth stairs by step 1 or either step 2

int countWays(int nStairs){

    if(nStairs < 0){
        return 0;
    }

    if(nStairs == 0){
        return 1;
    }

    int ans = countWays(nStairs-1) + countWays(nStairs-2);

    return ans;
}



int main(){

    int nStairs;
    cin >> nStairs;

    cout << "Total ways are " << countWays(nStairs) << endl;

}