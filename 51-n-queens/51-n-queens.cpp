class Solution {
public:
    
    bool isSafe(int row, int col, int n, vector<string>&board)
    {

            int dupRow = row, dupCol = col;
        
            while(row >= 0 && col >= 0)
            {
                if(board[row][col] == 'Q')     return false;
                row--; col--;
            }
        
            row = dupRow, col = dupCol;
            
            while(col >= 0)
            {
                if(board[row][col] == 'Q')    return false;
                col--;
            }
        
            row = dupRow, col = dupCol;
        
            while(row < n && col >=0)
            {
                if(board[row][col] == 'Q')    return false;
                row++, col--;
            }
        
            return true;
    }
    
    
    void solve(int col, int n, vector<vector<string>>&ans, vector<string>&board)
    {
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++)
        {
            if(isSafe(row, col, n,  board))
            {
                board[row][col] = 'Q';
                solve(col+1, n, ans, board);
                board[row][col] = '.';
            }
        }
        
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
          
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n, '.');
        for(int i=0; i<n; i++)
            board[i] = s;
        
        solve(0, n, ans, board);
        return ans;
        
    }
};