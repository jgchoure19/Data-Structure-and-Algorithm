class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n =s.length();
        
        stack <string> st;
        for(int i =0 ; i<s.length() ; i++){
            string ans="";
            while(s[i]!=' ' && i<n){
                ans+=s[i];
                i++;
            }
            st.push(ans);   
        }
        
        while( st.top()==""){
             st.pop();
        }
     
        return st.top().length();
        
    }
};