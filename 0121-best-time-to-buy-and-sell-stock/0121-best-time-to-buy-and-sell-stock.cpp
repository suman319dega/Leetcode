class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, price = prices[0];
        for(int i=1; i<prices.size(); i++) {
            max_profit = max(max_profit,prices[i] - price);
            price = min(price,prices[i]);
        }
        return max_profit;
    }
};