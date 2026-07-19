class Solution {
    public int maxProfit(int[] prices) {
        int max_profit = 0;
        int price = prices[0];
        for(int i=1; i<prices.length; i++) {
            max_profit = Math.max(max_profit,prices[i] - price);
            price = Math.min(price,prices[i]);
        }
        return max_profit;
    }
}