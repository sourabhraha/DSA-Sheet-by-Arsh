class Solution {
public:
    /*
            a11, a12, a13
            a21, a22, a23
            a31, a32, a33
        
          a11 
          a21 a12
          a31 a22 a13
          a32 a23
          a33
          
    
    */
    
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        map<int, vector<int>>mp;
        
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[0].size(); j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        
        vector<int>ans;
        bool toggle = true;
        
        for(auto it:mp)
        {
            auto n = it.second;
            if(toggle){ reverse(n.begin(), n.end()); toggle = false; }
            else        toggle = true;
            ans.insert(ans.end(), n.begin(), n.end());
        }
        return ans;
    }
};