class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int min_cost = 0;
        for(int i=0; i<cost.size(); i++) {
            if(i % 3 != 2) {
                min_cost += cost[i];
            }
        }
        return min_cost;
    }
};