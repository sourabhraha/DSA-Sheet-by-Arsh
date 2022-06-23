class Solution {
public:
    
    void calPermute(int idx, int n, vector<vector<int>>&ans, vector<int>&nums)
    {
        if(idx == n)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx; i<n; i++)
        {
            swap(nums[idx], nums[i]);
            calPermute(idx+1, n, ans, nums);
            swap(nums[idx], nums[i]);
        }
            
    }   
    
    
    vector<vector<int>> permute(vector<int>& nums) {
      
        vector<vector<int>>ans;
    
        calPermute(0, nums.size(), ans, nums);
        return ans;
        
    }
};