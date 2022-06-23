class Solution {
public:
    void calSub(int idx, int n, vector<vector<int>>&ans, vector<int>&ds, vector<int>&arr)
    {
        // if(idx == n){
            ans.push_back(ds);
        //     return;
        // }
        
        for(int i=idx; i<n; i++)
        {
            if(i>idx && arr[i] == arr[i-1]) continue;
            ds.push_back(arr[i]);
            calSub(i+1, n, ans, ds, arr);
            ds.pop_back();
        }
    }
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        calSub(0, nums.size(), ans, ds, nums);
        return ans;
    }
};