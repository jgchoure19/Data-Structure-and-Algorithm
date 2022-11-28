class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        set<int> hash;
        for(int num: nums){
            hash.insert(num);
            
        }
        
        int longst=0;
        
        for( int num : nums){
            
            if(!hash.count(num-1)){
                int currentno =num;
                int currentst=1;
                
                while(hash.count(currentno+1)){
                    
                    currentno +=1;
                    currentst +=1;
                    
                }
                longst =max(longst,currentst);
            }
        }
        return longst;
    }
};