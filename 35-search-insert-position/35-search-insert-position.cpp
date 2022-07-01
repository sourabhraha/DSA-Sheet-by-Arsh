class Solution {
public:
    
    /*
          1 3 5 6 
          
          2 
          
          i = 0 j = 3
          mid = 3/2 = 1
          arr[1] = 3 > 2 high = mid-1;
          mid = 0;
          ans = 1;
          
          7
          
          mid = 1
          low = mid + 1 = 2  high = 3
          mid = 2 + 3 / 2 = 2
          low = mid + 1 = 3 high = 3
          mid = 3 + 3 / 2 = 3
          low = mid +1 = 4
          
          
        
    
    */
    
    
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        int low=0, high = n-1;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            
            else if(nums[mid] > target)
                high = mid -1;
            
            else
                low = mid + 1;
        }
        return low;
        
    }
};