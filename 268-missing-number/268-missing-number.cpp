class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
   
        int st = 0, en = nums.size()-1;
        
        while(st <= en)
        {
            
            int mid = st + (en-st)/2;
            if(nums[mid] > mid)
                 en = mid - 1;
            else
                st = mid + 1;
        
        }
        return st;
        
    }
};