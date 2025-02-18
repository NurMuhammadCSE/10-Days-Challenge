#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int more = target - nums[i];
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(target - nums[i]) != mp.end()) {
            return {mp[target - nums[i]], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the target: ";
    cin >> target;
    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << " " << result[1] << endl;
    return 0;
}