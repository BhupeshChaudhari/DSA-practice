#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        int j=1;
        char ch = 'A' + n - i;
        while(j<=n)
        {
            cout<< ch;
            j=j+1;
            ch = ch+1;
            
        }
        
        cout << endl;
        i = i+1;
    }


}

/*
D
C D
B C D
A B C D
*/