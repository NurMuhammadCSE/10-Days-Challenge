#include<bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) return 1;
    return num * factorial(num - 1);
}

int factorialShort(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial: " << factorial(num) << endl;
    cout << "Factorial: " << factorialShort(num) << endl;
    return 0;
}