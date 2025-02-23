#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << isPalindrome(s) << endl;
    return 0;
}