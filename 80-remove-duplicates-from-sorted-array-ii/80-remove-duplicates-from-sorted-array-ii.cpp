class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =1;
        int c=1;
        
        for( int i =1 ;i < nums.size() ; i++){
            
            if( nums[i]!=nums[i-1]){
                
                nums[k]=nums[i];
                k++;
                c=1;
                
            }
            else{
                
                if(c<2 && nums[i]==nums[i-1]){
                    
                    nums[k]=nums[i];
                    c++;
                    k++;
                }
            }
        }
        return k;
    }
};