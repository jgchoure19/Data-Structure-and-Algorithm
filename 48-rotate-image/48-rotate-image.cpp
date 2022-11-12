class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    
       int n = matrix.size();
        int m = matrix[0].size();
        
       for( int i =0 ; i< n; i++){
            
            for( int j =i+1; j < m ; j++){
                
                int tmp =matrix[i][j];
                  matrix[i][j]=  matrix[j][i];
                  matrix[j][i]=tmp;
            }
        }
        
    
    int colS  = 0;
    int colE = m-1;
    
    // swap columns
    
    while(colS<colE){
        for(int row  = 0; row<n; row++){
            int temp = matrix[row][colS];
            matrix[row][colS] = matrix[row][colE];
            matrix[row][colE] = temp;
        }
        colS++; colE--;
    }
        
    }
};