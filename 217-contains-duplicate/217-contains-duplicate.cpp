class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int pre=nums[0];
        
        for( int i =1 ; i<nums.size(); i++){
            
            if(nums[i]==pre){
                return true;}
            pre=nums[i];
            
        }
        return false;
        
    }
};