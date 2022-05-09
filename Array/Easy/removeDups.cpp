class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        int cnt = 0;
        for(int i=1; i<n; i++){
    
            if(nums[i] == nums[i-1]) // duplicates coming so skip
                cnt++;
            else                        // duplicated ended so modify the value
                nums[i-cnt] = nums[i];
        }
        return n-cnt;
    }
};