#include <iostream>
using namespace std;

// Helper function to calculate mid^n
long long power(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // যদি exponent বিজোড় হয়
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

// Function to find nth root of m
int nthRoot(int n, int m) {
    int low = 1, high = m;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long midPower = power(mid, n); // mid^n বের করা হচ্ছে
        
        if (midPower == m) {
            return mid;  // সঠিক রুট পেলে রিটার্ন করবো
        } else if (midPower < m) {
            low = mid + 1; // রুট বড় করতে হবে
        } else {
            high = mid - 1; // রুট ছোট করতে হবে
        }
    }
    
    return -1;  // যদি পূর্ণসংখ্যার রুট না পাওয়া যায়
}

int main() {
    int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;
    
    cout << "Nth Root: " << nthRoot(n, m) << endl;
    return 0;
}
