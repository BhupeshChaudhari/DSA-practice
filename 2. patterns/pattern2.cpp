#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter n" ;
    cin >> n;

    int i = 1;
    int count = 1;

    while(i <= n )
    {
        int j=1;
        while(j<=n)
        {
            cout << count;
            j = j + 1;
            count = count + 1;
        }
        cout << endl;

        i = i + 1;
    }
}


/*
Enter n 4
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16
*/