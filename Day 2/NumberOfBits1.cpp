#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;

        while (n) {
            cnt += (n & 1);
            n >>= 1;
        }

        return cnt;
    }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Solution obj;
    cout << "Number of 1 bits: " << obj.hammingWeight(n) << endl;
    
    return 0;
}