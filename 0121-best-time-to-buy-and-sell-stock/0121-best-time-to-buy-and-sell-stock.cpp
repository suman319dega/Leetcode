class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = prices[0];
        int max_profit = 0;
        for(int i=1; i<prices.size(); i++) {
            int cur = prices[i] - profit;
            max_profit = max(cur,max_profit);
            profit = min(prices[i],profit);
        }
        return max_profit;
    }
};