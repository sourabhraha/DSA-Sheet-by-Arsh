class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    
        int m = matrix.size();
        int n = matrix[0].size();        
        bool zeroRow = false, zeroCol = false;
        
        for(int i=0; i<m; i++)      // checking for zeros
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    if(i==0) zeroRow = true;
                    if(j==0) zeroCol = true;
                    
                    matrix[0][j] = matrix[i][0] = 0;   // Zeros Pos marked
                }
            }
        }
        
        for(int i=1; i<m; i++)  // setting zeros except for first row and col
        {

            for(int j=1; j<n; j++)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
                
            }
        
        }
        
        if(row){
            for(int j=0; j<n; j++) matrix[0][j] = 0;
        }
        
        if(col){
            for(int i=0; i<m; i++) matriz[i][0] = 0;
        }

    
    }
};