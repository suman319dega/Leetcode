class Solution {
public:
    int minCost(int n) {
        int ans = (n * (n-1)) / 2;
        return ans;
    }
};