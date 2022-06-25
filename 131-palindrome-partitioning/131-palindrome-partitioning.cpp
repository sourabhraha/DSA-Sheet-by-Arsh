class Solution {
public:
    
    bool isPal(string s, int st, int en)
    {
            while(st <= en)
            {
                if(s[st++] != s[en--])
                    return false;
            }
        return true;
    }
    
    
    void solve(int idx, int n, vector<vector<string>>&ans, vector<string>&container, string s)
    {
        if(idx == n){
            ans.push_back(container);
            return;
        }
        
        for(int i=idx; i<n; i++)
        {
            if(isPal(s, idx, i))
            {
                container.push_back(s.substr(idx, i-idx+1));
                solve(i+1, n, ans, container, s);
                container.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>container;
        
        solve(0, s.size(), ans, container, s);
        return ans;
    }
};