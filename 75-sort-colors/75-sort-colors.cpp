class Solution {
public:
    void sortColors(vector<int>& nums) {
     
        // o(2N)
         int a=0 , b=0 , c=0 ;
        for(int i =0 ; i<nums.size() ; i++){
            
            if(nums[i]==0){
                a++;
            }
            else if(nums[i]==1)
                b++;
            else 
                c++;
            
        }
        int ndata=0;
       
        while(a>0)
        {
            nums[ndata]=0;
            ndata++;
            a--;
        }
        while(b>0)
        {
            nums[ndata]=1;
            ndata++;
            b--;
        }
        while(c>0)
        {
            nums[ndata]=2;
            ndata++;
            c--;
        }
    }
};