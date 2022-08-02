class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        
        ans.push_back({1});
        if(numRows == 1) return ans;
        
        vector<int>prev(2);
        prev[0] = 1;
        prev[1] = 1;
        ans.push_back(prev);
        
        for(int i=2; i<numRows; i++)
        {
            vector<int>temp(i+1);
            temp[0] = 1;
            temp[i] = 1;
            
            for(int j=1; j<i; j++)
            {
              
                temp[j] = prev[j] + prev[j-1];
            }
            
            ans.push_back(temp);
            prev = temp;
        }
        return ans;
    }
};