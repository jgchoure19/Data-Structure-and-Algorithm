//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    
	    int k  = pat.length();
	    
	    map<char , int > mp , mp1;
	    for( auto it: pat) mp[it]++;
	    
	    int start = 0 , end = 0 , ans = 0 ;
	    
	    while( end < txt.length()){
	        
	        mp1[txt[end]]++;
	       // if( end -  start +1 < k)
	       //  end++;
	       // else
	        if(end - start +1 ==k  ) {
	            
	             if( mp == mp1 ) ans++;
	             mp1[txt[start]]--;
	             
	             if(mp1[txt[start]] == 0 ) mp1.erase(txt[start]);
	             start++;
	              
	            }
	            end++;
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends