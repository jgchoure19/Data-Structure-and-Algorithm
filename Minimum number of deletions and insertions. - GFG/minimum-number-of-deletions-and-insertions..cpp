//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
    public:
     
	    
    void lcs( string str1 , string str2 , int  m , int n ,vector<vector<int>>&dp ){
        for(int i = 1; i<= m ; i++){
	        for(int j = 1 ; j <= n ; j++){
	            if(str1[i-1] ==  str2[j-1])
	              dp[i][j] = 1+dp[i-1][j-1];
	             else
	               dp[i][j] = max( dp[i-1][j] , dp[i][j-1] );
	        }
	    }
        
    }
	
	
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    
	    int m = str1.size();
	    int n = str2.size();
	    //int t[m+1][n+1];
	    vector<vector<int>> dp(m+1 , vector<int>(n+1 , 0));
	    lcs(str1 , str2 , m , n , dp);
	    int dlt = m-dp[m][n];
	    int ins = n - dp[m][n];
	    
	    return dlt+ins;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends