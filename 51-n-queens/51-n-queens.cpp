class Solution {
public:
    
//     bool isSafe(int row, int col, int n, vector<string>&board)
//     {

//             int dupRow = row, dupCol = col;
        
//             while(row >= 0 && col >= 0)
//             {
//                 if(board[row][col] == 'Q')     return false;
//                 row--; col--;
//             }
        
//             row = dupRow, col = dupCol;
            
//             while(col >= 0)
//             {
//                 if(board[row][col] == 'Q')    return false;
//                 col--;
//             }
        
//             row = dupRow, col = dupCol;
        
//             while(row < n && col >=0)
//             {
//                 if(board[row][col] == 'Q')    return false;
//                 row++, col--;
//             }
        
//             return true;
//     }
    
    
    void solve(int col, int n, vector<vector<string>>&ans, vector<string>&board, vector<int>&leftRow, vector<int>&upperDig, vector<int>&lowerDig)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++)
        {
            if(leftRow[row] == 0 && upperDig[n-1+col-row] == 0 && lowerDig[row+col] == 0)
            {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDig[n-1+col-row] = 1;
                lowerDig[row+col] = 1;
                solve(col+1, n, ans, board, leftRow, upperDig, lowerDig);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDig[n-1+col-row] = 0;
                lowerDig[row+col] = 0;
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
          
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n, '.');
        for(int i=0; i<n; i++)
            board[i] = s;
        
        vector<int>leftRow(n, 0), upperDig(2*n-1, 0), lowerDig(2*n-1, 0);
        
        solve(0, n, ans, board, leftRow, upperDig, lowerDig);
        return ans;
        
    }
};