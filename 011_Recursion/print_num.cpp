#include<iostream>
using namespace std;

void print(int n)
{
    if(n == 0)
        return;

    cout << n << " " << "hh";

    print(n-1);

    cout << n << " " << "hello";
}

int main()
{
    int n;
    cin >> n;

    print(n);
}