class Solution {
public:
    
    void helper(vector<int>&nums, int n, int idx, vector<vector<int>>&ans,                                  vector<int>level)    
        {  
                if(idx >= n)
                {
                    ans.push_back(level);
                    return;
                }
                level.push_back(nums[idx]);
                helper(nums, n, idx+1, ans, level);
                level.pop_back();
                helper(nums, n, idx+1, ans, level);
        }
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>level;
        helper(nums, nums.size(), 0,  ans, level);
        
        return ans;
    }
};