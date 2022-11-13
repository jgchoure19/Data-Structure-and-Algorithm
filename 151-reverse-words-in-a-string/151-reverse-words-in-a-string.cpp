class Solution {
public:
    string reverseWords(string s) {
        
         int i = 0;
        int n = s.size();
        vector<string> v;
        
        
        while (i < n){            
            string result = "";
            
            while (i < n && s[i] == ' ')
                i++;
            while (i < n && s[i] != ' ')
                result+=s[i++];
            
            if (result == "" || result == " ") continue;
            v.push_back (result);
        }
        
        reverse (v.begin (), v.end ()); // change 1
        string ans = v[0];
        
        for (int i = 1; i < v.size(); i++){ 
            ans += (" " + v[i]); // change 2
        }
        return ans;
    }
};