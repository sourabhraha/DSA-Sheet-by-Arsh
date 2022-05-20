class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        int n = nums.size();
        int sum = n*(n+1)/2;
        
        for(int n:nums)
            sum -= n;
        
        return sum;
        
    }
};