class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
   
    int xo = 0, i = 0;
	for (i = 0; i < nums.size(); i++) {
		xo = xo ^ i ^ nums[i];
	}
      return xo^i;  
    }
};