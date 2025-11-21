class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN;
        int price = prices[0];
        for(int i=1; i<prices.size(); i++) {
            max_profit = max(max_profit,prices[i] - price);
            price = min(price,prices[i]);
        }
        if(max_profit == -1 || max_profit == INT_MIN) return 0;
        return max_profit;
    }
};