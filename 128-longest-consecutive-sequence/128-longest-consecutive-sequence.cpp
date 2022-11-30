class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      /*  if(nums.size()==0)
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
        return longst;*/
        
        sort(nums.begin() , nums.end());
        int ans=0, count=0;
        
        if(nums.size()==0)
            return 0;
        
        vector<int> v;
        v.push_back(nums[0]);
        
        //remove the repeated element 
        for(int i=1; i<nums.size() ; i++){
            
            if(nums[i]!=nums[i-1])
                v.push_back(nums[i]);
        }
        
        for(int i =0 ; i<v.size() ; i++){
            
            if(i>0 and v[i]==v[i-1]+1)
                count++;
            else
                count=1;
            
            ans=max(ans, count);
        }
        return ans;
    }
};