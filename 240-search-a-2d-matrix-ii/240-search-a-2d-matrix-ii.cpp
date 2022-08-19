class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int st = 0, en = matrix.size();
        int last = matrix[0].size()-1;
            
        while(st < en && last >=0)
        {
           if(matrix[st][last] == target) return true;
            
            if(matrix[st][last] > target) last--;
            else                          st++;
            
        }
        return false;
    }
};