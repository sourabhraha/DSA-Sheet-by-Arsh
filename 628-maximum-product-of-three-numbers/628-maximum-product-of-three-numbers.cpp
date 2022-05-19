class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mini1 = INT_MAX, mini2 = INT_MAX;
        int maxi1 = INT_MIN, maxi2 = INT_MIN, maxi3 = INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            
            int num = nums[i];
            
            if(num < mini1)
            {
                mini2 = mini1;
                mini1 = num;
            }
            
            else if(num < mini2)
            {
                mini2 = num;
            }
            
            if(num > maxi1)
            {
                maxi3 = maxi2;
                maxi2 = maxi1;
                maxi1 = num;
            }
            
            else if(num > maxi2)
            {
                maxi3 = maxi2;
                maxi2 = num;
            }
            
            else if(num > maxi3)
            {
                maxi3 = num;
            }
        }
        
        return max(mini1 * mini2 * maxi1, maxi1 * maxi2 * maxi3);
        
    }
};