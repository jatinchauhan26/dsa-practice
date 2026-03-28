// Problem: Duplicate Numbers XOR
// Approach: Frequency Counting using Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = 0;
       
        for(int num : nums){
            mp[num]++;
        }

        for(auto &it : mp){
            if(it.second == 2){
                ans ^= it.first;
            }
        }

        return ans;
    }
};