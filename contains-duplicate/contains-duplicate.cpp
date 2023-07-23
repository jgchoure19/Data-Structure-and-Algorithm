class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       /* sort(nums.begin() , nums.end());
        int pre=nums[0];
        
        for( int i =1 ; i<nums.size(); i++){
            
            if(nums[i]==pre){
                return true;}
            
            pre=nums[i];
            
        }
        return false; */

        //maping

         map <int , int> mp;
        for( auto it: nums )   mp[it]++;
          for( auto it: mp){
             if( it.second>1) return true;
                 
         }
            return false;
  }
};