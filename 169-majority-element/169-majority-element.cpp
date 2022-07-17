class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>ump;
        
        for(auto it:nums) ump[it]++;
        int ans = 0, curr = 0;
        for(auto it:ump) if(it.second > curr){ ans = it.first; curr = it.second; }
        return ans;
    }
};