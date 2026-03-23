class Solution {
public:
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
   vector<int> result;
   int dir = 0;
   int m = matrix.size();
   int n = matrix[0].size();



// Problem: Spiral Matrix
// Approach: Boundary Traversal (Top, Bottom, Left, Right)
// Time Complexity: O(m * n)
// Space Complexity: O(1) (excluding output vector)
   /*
   dir = 0 left to right
   dir = 1 top to bottom
   dir = 2 left to right
   dir = 3 bottom to top 
   */    
   int left = 0;
   int right = n-1;
   int top = 0;
   int bottom =  m -1;
   while(top<=bottom && left<=right){
   if(dir == 0){
    for(int i = left ;i<= right ;i++){
     result.push_back(matrix[top][i]);
    }
    top++;
   }
   if(dir == 1){
    for(int i = top ; i<=bottom ; i++){
     result.push_back(matrix[i][right]);
    }
    right--;
    }
    if(dir == 2){
    for(int i = right ; i>= left ; i--){
     result.push_back(matrix[bottom][i]);
    }
    bottom--;
    }
    if(dir == 3){
    for(int i = bottom ; i>= top ;i--){
    result.push_back(matrix[i][left]);
    }
    left++;
   }
   dir++;
   if(dir==4){
    dir=0;
   }} 
   return result;
    }
};