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
        count = i;
        while(j<=i)
        {
            cout<< count << "\t";
            j = j+1;
            count = count + 1;
        }
        cout << endl;

        i=i+1;

    }
}

/*
n=4
1
2 3
3 4 5
4 5 6 7
*/