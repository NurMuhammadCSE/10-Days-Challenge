#include <iostream>
using namespace std;

int floorSqrt(int n) {
    int l = 0, h = n, ans = 0;

    while (l <= h) {  // ✅ লুপ শর্ত ঠিক করা হয়েছে
        int mid = l + (h - l) / 2;  // ✅ সঠিকভাবে mid বের করা হয়েছে

        if (1LL * mid * mid == n) {  // ✅ long long করে overflow এড়ানো হয়েছে
            return mid;
        } else if (1LL * mid * mid < n) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    
    return ans;  // ✅ Floor value return করা হচ্ছে
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Floor Square Root: " << floorSqrt(n) << endl;
    return 0;
}
