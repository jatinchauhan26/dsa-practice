class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       vector<int> result;
      int n = changed.size();
      if(n % 2 != 0 ){
        return {};
      }
     
        sort(begin(changed),end(changed));
      map<int,int> mp;
     for(int &num : changed){
        mp[num]++;
     }
     for(int &num :changed ){
        int twice = num*2;
        if(mp[num] == 0) continue;        
        if(mp.find(twice) == mp.end() || mp[twice] == 0 ){
            return {};
        }
        else {
            result.push_back(num);
            mp[num]--;
            mp[twice]--;
        }
     }
     return result ;
    }
};