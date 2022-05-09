class Solution {
public:
    void sortColors(vector<int>& nums) {
       int st = 0, en = nums.size()-1, mid = 0;
        
        while(mid <= en){
            
            if(nums[mid] == 0)      // move all zeros to the left side of mid
            {   
                swap(nums[mid], nums[st]);
                mid++;
                st++;
            }
            
            else if(nums[mid] == 1)
            {
                mid++;
            }
            
            else{                   // move all 2s to the right side of mid
                
                swap(nums[mid], nums[en]);
                en--;
            }
            
            
            
        }
    }
};