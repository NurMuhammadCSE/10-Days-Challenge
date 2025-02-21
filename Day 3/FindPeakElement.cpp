#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] > nums[mid + 1]) {
            high = mid; // পিক এলিমেন্ট বামে আছে
        } else {
            low = mid + 1; // পিক এলিমেন্ট ডানে আছে
        }
    }

    return low; // low বা high-ই পিক ইনডেক্স হবে
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << "Peak Element Index: " << findPeakElement(nums) << endl;
    
    vector<int> nums2 = {1, 2, 1, 3, 5, 6, 4};
    cout << "Peak Element Index: " << findPeakElement(nums2) << endl;

    return 0;
}
