#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
            }

            if (prefix.empty()) {
                return "";
            }
        }
        return prefix;
    }
};

int main(){
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    Solution obj;
    cout << "Longest Common Prefix: " << obj.longestCommonPrefix(strs) << endl;
    
    return 0;
}