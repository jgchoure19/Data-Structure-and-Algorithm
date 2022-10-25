class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      
        int row_s=0, row_e=n-1;
        int col_s=0 , col_e =n-1;
        
        int cnt=0, total=n*n;
        int p=1;
      
        vector<vector<int>> v(n, vector<int> (n));   //   vector<int> a[n][n];
        
        while(row_s<= row_e && col_s <= col_e){
            
            // for row_s
            for(int col= col_s ; cnt<total && col<= col_e ; col++ ){
                v[row_s][col]=p++;
                  cnt++;
            }
            
            // for col_e
            row_s++;
            for(int row =row_s ; cnt< total && row <= row_e ; row++){
                v[row][col_e]=p++;
                  cnt++;               
        
            }
            
            // row_e 
            
              col_e--;
            for(int col = col_e ; cnt< total && col>=col_s ; col--){
                v[row_e][col]=p++;
                  cnt++;
            }
            
            // col_s
            row_e--;
            for( int row = row_e ; cnt< total && row >= row_s ; row-- ){
                v[row][col_s]=p++;
                  cnt++;
            }
             col_s++;
        } 
        return v;
         
    }
};