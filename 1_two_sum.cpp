#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Problem: Two Sum
// Platform: LeetCode
// Approach: Hash Map
// Time: O(n)
// Space: O(n)

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int remaining = target - nums[i];

        if (mp.find(remaining) != mp.end()) {
            return {mp[remaining], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}