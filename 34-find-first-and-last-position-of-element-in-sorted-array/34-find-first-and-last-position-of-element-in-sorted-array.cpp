class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        
        int s=0;
        int e=nums.size()-1;
        
        int fpos=-1;
        int lpos=-1;
        
        //first position
        while(s<=e){
            
            int mid = s+(e-s)/2;
            if(nums[mid]==t){
                fpos= mid;
                e=mid-1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{ s=mid+1;}
            
          }
        
        s=0;
        e=nums.size()-1;
        
        // last position
        while(s<=e){
            
            int mid = s+(e-s)/2;
            if(nums[mid]==t){
                lpos= mid;
                s=mid+1;
            }
            else if(nums[mid]>t){
                e=mid-1;
            }
            else{ s=mid+1; }
            
          }
        
        return { fpos,lpos};
    }
};