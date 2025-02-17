
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// GCD ফাংশন (ইউক্লিডিয়ান অ্যালগরিদম)
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " is: " << __gcd(a, b) << endl;
    return 0;
}