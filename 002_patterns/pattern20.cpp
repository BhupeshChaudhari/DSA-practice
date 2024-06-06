#include<iostream>
using namespace std;

int main(){

    int n=4;
    // cin>>n;

    int i=1;


    while(i<=n){

        int j=n;
        int count = 1;
        while(j>=i)
        {
        cout<<count;
        count = count + 1;
        j = j-1;
        }

        int k = 2;
        while(k<=i){
            cout<<"*";
            k = k + 1;
        }
        while(k>=i){
            cout<<"*";
            k = k + 1;

        }

        int l=n;
        int count = n

        cout<<endl;
        i = i + 1;

    }
}