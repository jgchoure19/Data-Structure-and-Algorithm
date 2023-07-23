class Solution {
public:
     void reverse( vector<int>&nums, int start , int end){

         while( start < end ){

             //swap 
             int tmp = nums[start];
             nums[start] = nums[end];
             nums[end] = tmp ;
             
             start++;
             end--;

         }
     }

    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        int r = k%n;
       
        //reverse entire
        reverse(nums ,  0 , n-1);
        // reverse first k 
        reverse( nums , 0 , r-1);
        //reverse remaining 
        reverse( nums , r , n-1);
         
    }
};