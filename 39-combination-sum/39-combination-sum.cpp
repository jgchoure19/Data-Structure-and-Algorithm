class Solution {
    
    public: 
       void findcombo( int i , int target , vector<int > &arr , vector<vector<int>> &ans , vector<int> &ds){
           
         if(i==arr.size()){
            if(target==0){
                ans.push_back(ds);
            } 
             return ;
             }  
           
           //pick up the elements
           if(arr[i]<=target){
               ds.push_back(arr[i]);
               findcombo(i , target-arr[i], arr , ans, ds);
               ds.pop_back();
               
           }
           findcombo(i+1 , target , arr , ans , ds);
           
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        findcombo( 0 , target , candidates , ans , ds);
        return ans;
    }
};