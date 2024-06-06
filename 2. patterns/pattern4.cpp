#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i=1;
    int count = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<< i << "\t";
            j = j+1;
        }
        cout << endl;
        // count = count + 1;
        i=i+1;

    }
}


/*
n=4
1
22
333
4444
*/