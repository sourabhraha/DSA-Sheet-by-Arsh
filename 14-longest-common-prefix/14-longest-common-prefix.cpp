class Solution {
public:
    int minLen(vector<string>strs)
    {
        int mini = INT_MAX;
        for(int i=0; i<strs.size(); i++)
        {
            int temp = strs[i].length();
            if(mini > temp)
                mini = temp;
        }
        return mini;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
       
        string ans;
        int n = minLen(strs);
        
        char curr;
        for(int i=0; i<n; i++)      // for every char
        {   
            curr = strs[0][i];
            for(int j=1; j<strs.size(); j++)
            {
                if(strs[j][i] != curr)
                    return ans;
            }
             ans.push_back(curr);
        }
        return ans;
    }
};