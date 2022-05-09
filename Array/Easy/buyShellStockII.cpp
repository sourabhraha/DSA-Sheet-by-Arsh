class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size() - 1;
        int valley = prices[0];
        int peak = prices[0];
        int i = 0, profit = 0;
        
        while(i<n){
            
            while(i<n && prices[i] >= prices[i+1])
                i++;
            valley = prices[i];
            
            while(i<n && prices[i] < prices[i+1])
                i++;
            peak = prices[i];
            
            profit += peak - valley;
        }
        return profit;
    }
};