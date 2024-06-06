
// To find char with max occurrence in a word

#include<iostream>
using namespace std;


char getMaxOccChar(string s){

    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num = 0;
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }
        arr[num]++;
    }

    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){

    string s;
    cout << "Enter String ";
    cin >> s;
     
    cout << getMaxOccChar(s);

}