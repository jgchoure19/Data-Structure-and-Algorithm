class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int i=0;
        int n = s.length()-1;
    
        int cnta=0;
        int cntb=0;
        
     while(i<n){
            
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='A' ||                  s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                 cnta++;
                }
        
            
            if(s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u'|| s[n]=='A' ||                  s[n]=='E' || s[n]=='I' || s[n]=='O' || s[n]=='U' ){
                   cntb++;
            }
         i++;
         n--;
        }
        
        if(cnta==cntb)  return true;
        
        return false;
        
    }
};