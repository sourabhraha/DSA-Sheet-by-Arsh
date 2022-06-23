class Solution {
public:
    
    void calPermute(int i, int n, map<int, int>mp, vector<vector<int>>&ans, vector<int>&ds, vector<int>&nums)
    {
        if(ds.size() == n)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0; i<n; i++)
        {
            if(!mp[i])
            {
                ds.push_back(nums[i]);
                mp[i] = 1;
                calPermute(i+1, n, mp, ans, ds, nums);
                mp[i] = 0;
                ds.pop_back();
            }
            
        }
    
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        map<int, int>mp;
        vector<vector<int>>ans;
        vector<int>ds;
        
        calPermute(0, nums.size(), mp, ans, ds, nums);
        return ans;
        
    }
};