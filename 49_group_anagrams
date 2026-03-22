#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string, vector<string>> mp;

// Problem: Group Anagrams
// Approach: Sorting + HashMap
// Time: O(n * k log k)
// Space: O(n * k)

    for (int i = 0; i < strs.size(); i++) {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        mp[temp].push_back(strs[i]);
    }

    for (auto it : mp) {
        result.push_back(it.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    // print output
    for (auto group : ans) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}