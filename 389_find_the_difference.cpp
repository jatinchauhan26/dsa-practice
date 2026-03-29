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





/////// OTHER WAY USING XOR


// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//     int XOR = 0;
//     for(char &num : s){
//         XOR ^= num ; 
//     }
//     for(char &num : t){
//         XOR ^= num;
//     }
//    return (char)XOR;
//     }
// };