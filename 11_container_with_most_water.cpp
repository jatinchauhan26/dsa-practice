#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Container With Most Water
// Approach: Two Pointer
// Time: O(n)
// Space: O(1)

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int i = 0;
    int j = height.size() - 1;

    while(i < j) {
        int min_height = min(height[i], height[j]);
        int width = j - i;
        int area = width * min_height;

        maxWater = max(maxWater, area);

        if(height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum Water: " << maxArea(height) << endl;

    return 0;
}