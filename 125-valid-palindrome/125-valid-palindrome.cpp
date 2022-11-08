class Solution {
public:
    bool isPalindrome(string s) {
        
        //97 to 122    ,     a to z 
        // 65 to  90       A to Z 
        
        
         string remove_kachra;
        
        for(int i =0 ; i < s.size() ; i++){
            
            // for number and lower case letters
            if( (s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')){
                
                remove_kachra+=s[i];
            }
            
            // upper case
            if( s[i]>='A' and s[i]<='Z'){
               remove_kachra +=s[i]+32;
            }
            
        }
        string ans = remove_kachra;
        reverse(ans.begin() , ans.end());
        
        if( ans==remove_kachra)  return true ;
        return false;
    }
    
};