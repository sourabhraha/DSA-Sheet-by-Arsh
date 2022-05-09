class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        int mini = INT_MAX;
        int maxProfit = 0;
        int n = prices.size();
        
        for(int i=0; i<n-1; i++){

            if(prices[i] < mini)
            {
                mini = prices[i];
            }
            
            int profit = prices[i+1]-mini;
            maxProfit = max(maxProfit, profit);
            
        }
        
        return maxProfit;
     
}
};