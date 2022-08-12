class Solution {
public:
    
  static bool comp(pair<int, int>p1, pair<int, int>p2)
    {
        if(p1.second < p2.second)
            return true;
        else if(p1.second == p2.second)
             return (p1.first > p2.first);
        return false;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
     
           map<int, int>mp;
           for(int i=0; i<nums.size(); i++)
                mp[nums[i]]++;
        
            vector<pair<int, int>>cnt;
            for(auto it:mp)
                cnt.push_back(make_pair(it.first, it.second));
        
            sort(cnt.begin(), cnt.end(), comp);
            
            vector<int>ans;
        
            for(auto it:cnt)
            {
                int freq = it.second;
                while(freq--)
                {
                    ans.push_back(it.first);
                }
            }
        
        
           return ans;
    }
};