#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i<=n)
    {
        int space = i-1;
        while(space){
            cout << " ";
            space = space-1;
        }
        int j=1;
        int star = n-i+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        
        cout<<endl;
        i=i+1;

 
    }


}

/*
    *   *   *   *
        *   *   *
            *   *
                *

*/