class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char , int> mp(26);
        
        //stored the freq
        for(int i =0 ; i<s.size() ; i++){
            mp[s[i]]++;
        }
        //  left to right non-repeating char
        for( int i =0 ;i<s.size(); i++){
            if(mp[s[i]]==1)
                return i;
        }
        
        return -1;
    
    }
};