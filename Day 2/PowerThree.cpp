#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1)
            return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Solution obj;
    cout << (obj.isPowerOfThree(n) ? "Power of Three" : "Not Power of Three") << endl;
    
    return 0;
}