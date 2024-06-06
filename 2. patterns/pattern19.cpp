#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;

    int i=1;

    while(i<=n){

        int space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }
        
        int j=1;
        int count = 1;
        while(j<=i){
            cout << count;
            count = count + 1;
            j = j + 1;
        }

        int k = 2;
        while(k<=i){
            cout << i-k+1;
            k = k + 1;

        }

        i = i +1;
        cout<<endl;

    }
}


/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/