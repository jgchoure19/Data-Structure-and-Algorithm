class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       
       vector<int> even,odd;
        for(int i =0 ; i<nums.size() ; i++){
            
            if(nums[i]%2==0)
                 even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
            
        }
        int n =even.size();
        vector<int> ans;
        
        for(int i=0; i<n; i++){
          ans.push_back(even[i]);    
              ans.push_back(odd[i]);
        }
        return ans;
    }
};