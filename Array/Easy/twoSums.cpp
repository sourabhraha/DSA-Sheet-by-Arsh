class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>ump;
        for(int i=0;; i++){
            auto it = ump.find(target-nums[i]);
            if(it != ump.end())
                return vector<int>{it->second, i};
            ump[nums[i]] = i;
        }
    }
};