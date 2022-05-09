class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int st = 1;
       int en = nums.size() - 1;
       int cnt;
        
        while(st <= en){
            
            int mid = st + (en - st) / 2;
            cnt = 0;
            
            for(int n:nums)
            {
                if(n <= mid)
                    cnt++;
            }
            
            if(cnt <= mid)
                st = mid + 1;
            else
                en = mid - 1;
            
        }
        return st;
    }
};