#include<iostream>
#include<vector>
using namespace std ;

// Problem: Two Sum II (Sorted Array)
// Approach: Two Pointer
// Time: O(n)
// Space: O(1)

vector <int>twosum2(vector<int>& nums,int target){
int n = nums.size();
int i = 0;
int j = n-1;

while(i<j){
  int sum =  nums[i]+nums[j];
  if(target<sum){
    j--;
  }
  else if(target>sum){
   i++;
  }
  else{
   return {i,j};
  };
}
return {};
}

int main(){
vector<int>nums = {2,7,11,15};
int target = 9;
vector <int> result = twosum2(nums,target);
for(int x : result){
    cout<< x << " ";
}
}

