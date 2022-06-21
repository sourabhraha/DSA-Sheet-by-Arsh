class Solution {
public:
    
    void calComb(int idx, int n, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds)
    {
        if(target == 0)
        {
                ans.push_back(ds);
                return;
        }
        for(int i = idx; i<n; i++)
        {
            if(i>idx && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            calComb(i+1, n, target-arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(), candidates.end());
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        calComb(0, candidates.size(), target, candidates, ans, ds);
        return ans;
    }
};