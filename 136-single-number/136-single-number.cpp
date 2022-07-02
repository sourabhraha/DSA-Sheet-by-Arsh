class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;
       
       for(int i=0; i<nums.size(); i++)
       {
           ans ^= nums[i];
       }
        
        cout<<(0^5);
        
        return ans;
    }
};