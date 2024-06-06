#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<< 'A' + i + j - 2;
            j=j+1;
            
        }
        
        cout << endl;
        i = i+1;
    }


}

/*
A
B C
C D E
D E F G
*/