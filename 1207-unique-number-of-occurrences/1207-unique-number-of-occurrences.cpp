class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
      
        // Count the freq
        unordered_map<int,int> mp ;
        for( auto it : arr ){
            mp[it]++ ;
        }

        // Count the unique elements and set size 
        set<int> st ;
        for( auto it : mp ){
          
            if( st.count( it.second ) ){
                return false ;
            }
            else st.insert( it.second );
        }
        
        return true ;
        
    }
};