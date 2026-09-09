class Solution {
    public long countCommas(long n) {
        long ans = 0;
        long x = 1000;
        while(n >= x) {
            ans += (n - x + 1);
            x *= 1000;
        }
        return ans;
    }
}