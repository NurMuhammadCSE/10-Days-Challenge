#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (auto c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }

        int start = 0;
        int end = str.size() - 1;

        while (start < end) {
            if (str[start] != str[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    Solution obj;
    cout << (obj.isPalindrome(s) ? "Palindrome" : "Not Palindrome") << endl;
    
    return 0;
}