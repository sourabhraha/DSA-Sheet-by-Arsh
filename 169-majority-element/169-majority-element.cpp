class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int candidate = -1, votes = 0;
            for(auto it:nums)
            {
                if(votes == 0)  candidate = it;
                votes += (candidate == it) ? 1 : -1;
            }
           return candidate;
    }
};