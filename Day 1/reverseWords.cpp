#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};

string reverseWords(string str) {
    stringstream ss(str);
    string word, result = "";

    while (ss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed Words: " << reverseWords(str) << endl;
    return 0;
}