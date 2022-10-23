class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
       /* int n=digits.size();
        int com =0;
        int ans;
        
        for(int i =0 ; i<n ; i++){
            
            com=com*10 + digits[i];
            ans= com+1;    
        }  */
        for(int i = digits.size()-1; i>=0; i--){
                    if(digits[i]<9){
                    digits[i]++;
                    return digits;
                    }
                    else
                          digits[i] = 0;
                    
            }
        
            digits.push_back(0);
            digits[0] = 1;
            return digits;
    }
};