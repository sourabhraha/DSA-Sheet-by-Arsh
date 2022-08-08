class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>visited;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(visited[nums[i]] == 1) return nums[i];
            visited[nums[i]] = 1;
        }
        return -1;
    }
};