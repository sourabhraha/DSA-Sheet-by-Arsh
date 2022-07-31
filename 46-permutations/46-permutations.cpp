class Solution {
public:
    
    void permu(vector<vector<int>>&ans, int idx, int size, vector<int>& nums)
    {
        if(idx == size)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx; i<size; i++)
        {
            swap(nums[i], nums[idx]);
            permu(ans, idx+1, size, nums);
            swap(nums[i], nums[idx]);
        }
        
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        permu(ans, 0, nums.size(), nums);
        
        return ans;
    }
};