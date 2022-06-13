int dp[101][10001];
class Solution {
public:
 
    int isExist(string &s, string &t, int i, int j)
    {
        if(i == 0 || j == 0)
            return 0;
        if(dp[i][j] != -1)  return dp[i][j];
        
        if(s[i-1] == t[j-1]) return dp[i][j] = 1 + isExist(s, t, i-1, j-1);
        else return dp[i][j] = isExist(s, t, i, j-1);
    }
    
    
    
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        
        if(n > m) return false;

        memset(dp, -1, sizeof(dp));
        
        if(isExist(s, t, n, m) == n) return true;
        else return false;
    }
};