//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    int i = 0 ;
    int bin[32];
    
    while( N>0){
          
      bin[i] = N%2;
      N = N/2;
      i++;
        
    }
    for( int j = i-1 ; j>=0 ; j--){
        cout<<bin[j];
    }
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends