#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int reverse = 0;

    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }
    return reverse;
}


int main(){
    int n;
    cin >> n;

    cout << reverseNumber(n) << endl;


}