class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int profit = prices[0];
        for(int i=1; i<prices.size(); i++) {
            max_profit = max(max_profit,(prices[i] - profit));
            profit = min(profit,prices[i]);
        }
        return max_profit;
    }
};