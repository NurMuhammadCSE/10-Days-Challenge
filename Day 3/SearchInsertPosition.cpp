#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid; // টার্গেট পাওয়া গেলে সরাসরি ইনডেক্স রিটার্ন
        } else if (nums[mid] < target) {
            low = mid + 1; // ডানদিকে যেতে হবে
        } else {
            high = mid - 1; // বাঁদিকে যেতে হবে
        }
    }

    return low; // এখানে ইনসার্ট করলে অ্যারে ঠিক থাকবে
}

int main() {
    vector<int> nums = {1, 3, 5, 6};

    cout << "Output: " << searchInsert(nums, 5) << endl; // Output: 2
    cout << "Output: " << searchInsert(nums, 2) << endl; // Output: 1
    cout << "Output: " << searchInsert(nums, 7) << endl; // Output: 4

    return 0;
}
