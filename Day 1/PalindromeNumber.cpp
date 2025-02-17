#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) return false;
    int reversed = 0, original = num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num)) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is not a Palindrome number." << endl;
    }
    return 0;
}