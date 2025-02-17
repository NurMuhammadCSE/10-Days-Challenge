#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= x;
    }
    return ans;
}

int countDigits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}

bool checkArmstrongRaw(int n){
    int sum = 0;
    int originalN = n;
    int digits = countDigits(n);

    while(n > 0){
        int lastDigit = n % 10;
        sum += power(lastDigit, digits);
        n /= 10;
    }

    return sum == originalN;
}

bool checkArmstrong(int n){
    int original = n;
    int sum = 0;
    int digits = 0;

    while(n > 0){
        n /= 10;
        digits++;
    }

    n = original;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits);
        n /= 10;
    }
    return sum == original;
}

int main(){
    int n;
    cin >> n;

    cout << checkArmstrongRaw(n) << endl;
    cout << checkArmstrong(n) << endl;
}