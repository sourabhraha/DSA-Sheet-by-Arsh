class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        nums.push_back(1000009);
        sort(nums.begin(), nums.end());
        int en = nums.size();
        
        for(auto it:nums)
            cout<<it<<" ";
        
        cout<<endl;
        
        int ans = -1, i=0;
        for(i=0; i<=en; i++){
                
            if(nums[i] != i)
            {
                ans = i;
                break;
            }
        
        }
        return ans;
        
    }
};