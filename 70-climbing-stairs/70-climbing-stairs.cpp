class Solution {
public:
    int climbStairs(int n) {
        
        int clm[55];
        clm[0]=0;
        clm[1]=1;
        
        for(int i = 2 ; i <=n+1; i++){
            
            clm[i]=clm[i-1]+clm[i-2];
        }
        return clm[n+1];
    }
};