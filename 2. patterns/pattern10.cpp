#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n)
    {
        char ch = 65;
        int j=1;
        while(j<=n)
        {
            cout<< ch;
            j=j+1;
            ch=ch+1;
        }
        cout << endl;
        i = i+1;
    }

}


/*
A B C
A B C 
A B C
*/