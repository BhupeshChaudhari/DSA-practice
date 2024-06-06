#include<iostream>
using namespace std;


void reverse(string& str, int s, int e)
{
    if(s>e)
        return ;
    
    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s, e);

}


int main(){

    string str = "abcde";
    int s = 0;
    int e = str.length() - 1;

    reverse(str, s, e);
    cout << str;
}