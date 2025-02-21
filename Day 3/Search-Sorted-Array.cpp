#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1;
    }
};


int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;  // Target পাওয়া গেলে ইনডেক্স রিটার্ন করবো।
        }

        // চেক করা হচ্ছে যে কোন অংশটি sorted
        if (nums[left] <= nums[mid]) {
            // বাম অংশ sorted হলে, চেক করবো যদি target বাম অংশে পড়ে
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // ডান অংশ sorted হলে, চেক করবো যদি target ডান অংশে পড়ে
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;  // Target পাওয়া না গেলে -1 রিটার্ন
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);
    cout << "Index of target: " << result << endl;

    return 0;
}
