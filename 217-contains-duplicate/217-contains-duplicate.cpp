class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n1 = nums.size();
       set<int>s;
       for(auto it:nums) s.insert(it);
       int n2 = s.size();
        
       return (n1 == n2) ? 0 : 1;
    }
};