
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
            cout<< i-j+1 << "\t";
            j = j+1;
        }
        cout << endl;

        i=i+1;

    }
}

/*
n=4
1
2 1
3 2 1
4 3 2 1
*/