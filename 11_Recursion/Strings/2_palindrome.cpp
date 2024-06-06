#include<iostream>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
    if(s>e)
        return true;
    
    if(str[s] != str[e])
        return false;
    
    s++;
    e--;
    return isPalindrome(str, s, e);

}


int main(){

    string str = "abcba";
    int s = 0;
    int e = str.length() - 1;

    bool ans = isPalindrome(str, s, e);
    cout << ans ;
}