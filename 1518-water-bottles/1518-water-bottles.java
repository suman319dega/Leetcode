class Solution {
    public int numWaterBottles(int n, int x) {
        int ans = n + (n-1)/(x-1);
        return ans;
    }
}