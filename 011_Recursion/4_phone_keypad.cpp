#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
    // base case
    if (index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num];
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

int main() {
    string digits = "89";
    vector<string> ans;

    if (digits.length() == 0) {
        // If no digits, return empty result
        return 0;
    }

    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);

    for (const string& combination : ans) {
        cout << combination << " ";
    }

    return 0;
}
