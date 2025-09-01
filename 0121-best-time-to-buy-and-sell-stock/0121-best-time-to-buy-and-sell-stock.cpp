class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int price = prices[0];
        for(int i=1; i<prices.size(); i++) {
            int profit = prices[i] - price;
            max_profit = max(max_profit,profit);
            price = min(price,prices[i]);
        }
        return max_profit;
    }
};