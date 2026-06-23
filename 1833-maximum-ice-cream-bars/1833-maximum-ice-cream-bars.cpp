class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int max = 0;
        for(int num : costs) {
            if(coins >= num) {
                coins -= num;
                max++;
            }
            else break;
        }
        return max;

    }
};