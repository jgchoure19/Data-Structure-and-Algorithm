class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int  n = nums.size();
        int k =0 ;
        
        for( int i =0 ; i< n ; i++){
           nums[k]=(nums[i]*nums[i] ) ;   
            k++;
            
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};