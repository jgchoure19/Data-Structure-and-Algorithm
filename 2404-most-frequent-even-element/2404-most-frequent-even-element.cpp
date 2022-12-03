class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int> mp;
        for(auto it: nums)  mp[it]++;
        int ans=-1,mx=-1;
    
        for(auto it: mp){
            if(it.second>mx && it.first%2==0){
                mx=it.second;
               ans =it.first;
          }
        }
        return ans;
        
    }
};