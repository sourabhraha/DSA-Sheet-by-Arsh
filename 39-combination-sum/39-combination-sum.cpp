class Solution {
public:
    
    void findComb(int i, int sum, vector<int>arr, vector<vector<int>>&ans, vector<int>&ds){
        
        if(i == arr.size())
        {
            if(sum == 0)
                    ans.push_back(ds);
            return;
        }
        
        if(arr[i] <= sum)
        {

            ds.push_back(arr[i]);
            findComb(i, sum - arr[i], arr, ans, ds);
            ds.pop_back();
        }
        findComb(i+1, sum, arr, ans, ds);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>ds;
        vector<vector<int>>ans;
        
        findComb(0, target, candidates, ans, ds);
        return ans;
        
    }
};