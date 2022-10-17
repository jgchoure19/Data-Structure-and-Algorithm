class Solution {
public:
    bool checkIfPangram(string s) {
        
        if(s.size()<26) return false;
        map<int,int> mp;      //albhabet value,assign 0 to map
       
        for(int i=0;i<26;i++ )
            mp[i]=0;
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]-'a']==0)
                mp[s[i]-'a']=1;
        }
        for(auto it:mp)
            if(it.second==0) return false;
        
        return true;
    }
};