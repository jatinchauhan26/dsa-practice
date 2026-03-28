class Solution {
public:
     
    // Problem: Find the Difference
    // Approach: Sum (ASCII difference)
    // Time: O(n)
    // Space: O(1)
    char findTheDifference(string s, string t) {
        int sum = 0;
         for(char ch : t ){
         sum = sum + ch;
        }
         for(char ch : s){
         sum = sum - ch;
        }
        return (char)sum;
    }
};