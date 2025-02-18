#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    vector<char> s(n);
    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    Solution obj;
    obj.reverseString(s);
    cout << "Reversed String: ";
    for (char c : s) {
        cout << c << " ";
    }
    return 0;
}