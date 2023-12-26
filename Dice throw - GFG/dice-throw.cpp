//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   long long solveM( int dice , int face , int X , vector<vector<long long >> &dp){
       
       
       if( X < 0 ) return 0 ;
       if( dice == 0 && X != 0 ) return 0 ;
       if( X == 0 && dice != 0 ) return 0 ;
       if( dice == 0 && X == 0)  return 1;
       
       if(dp[dice][X] != -1 ) return dp[dice][X];
       
       //choice 
       long long  way = 0 ;
       for( int i = 1  ; i<= face ; i++){
           
           way += solveM(dice-1 , face , X-i  , dp );
       }
       return dp[dice][X] =  way;
       
   }
  
    long long noOfWays(int M , int N , int X) {
        // code here
        vector<vector<long long>> dp( N +1 , vector<long long>(X+1 , -1) );
       return  solveM( N , M , X , dp ) ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends