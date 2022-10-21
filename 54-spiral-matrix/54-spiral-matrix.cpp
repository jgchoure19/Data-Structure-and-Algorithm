class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int n=matrix.size();
        int m=matrix[0].size();
        vector <int> ans;
        
        int row_s=0,row_e=n-1;
        int col_s=0, col_e=m-1;
        int cnt=0, total=n*m;
         
        while(row_s<= row_e && col_s <= col_e){
            
            for(int col= col_s ; cnt< total && col <= col_e ; col++){
                ans.push_back(matrix[row_s][col]);
                cnt++;
            }
            row_s++;
          
            for(int row = row_s ;cnt< total && row<= row_e ; row++){
             ans.push_back(matrix[row][col_e]);
                cnt++;
            }            
            col_e--;
            
            for(int col = col_e ;cnt< total && col >=col_s ; col--){
                ans.push_back(matrix[row_e][col]);
                cnt++;
            }
            
            row_e--;
            
            for(int row= row_e ;cnt< total&& row >= row_s ; row--){
                ans.push_back(matrix[row][col_s]);
                cnt++;
            }
            col_s++ ;     
            
        }
        return ans;
    }
};