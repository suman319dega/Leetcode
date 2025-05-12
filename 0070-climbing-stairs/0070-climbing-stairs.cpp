class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        int cur = 1, prev = 1;
        for(int i=2; i<=n; i++) {
            int temp = cur;
            cur = cur + prev;
            prev = temp;
        }
        return cur;
    }
};