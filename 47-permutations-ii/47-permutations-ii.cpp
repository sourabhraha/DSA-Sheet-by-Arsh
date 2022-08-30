class Solution {
public:
    
    void permu(vector<int>&nums, int idx, set<vector<int>>&ans)
    {
        if(idx == nums.size())
        {
            ans.insert(nums);
            return;
        }
        
        for(int i=idx; i<nums.size(); i++)
        {
            swap(nums[i], nums[idx]);
            permu(nums, idx+1, ans);
            swap(nums[i], nums[idx]);
        }
    }
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>>ans;
        
        permu(nums, 0, ans);
        
        vector<vector<int>>res;
        for(auto it:ans)
        {
            vector<int>temp;
            for(auto i = it.begin(); i != it.end(); i++)
                temp.push_back(*i);
            res.push_back(temp);
        }
        
        return res;
        
    }
};