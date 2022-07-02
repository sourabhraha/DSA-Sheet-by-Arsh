class Solution {
public:
    /*
            nth step = 1 + (n-1)th step
                     = 1 + 1 + (n-2)th step
    */
    
    int dp[10000001];
    
    int climb(int n)
    {
        if(dp[n] != 0)
            return dp[n];
        
        if(n == 0)
            return dp[n] = 0;
        if(n == 1)
            return dp[n] = 1;
        if(n == 2)
            return dp[n] = 2;
        
        return dp[n] = climb(n-1) + climb(n-2);
    }
    
    
    
    int climbStairs(int n) {
        int ans = 0;
        if(n == 0)
            return ans;
        
        ans = climb(n);
        return ans;
    }
};