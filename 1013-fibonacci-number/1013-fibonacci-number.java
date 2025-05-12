class Solution {
    int [] ans = new int[31];
    public int fib(int n) {
        if(n<=1) return n;
        if(ans[n] != 0) return ans[n];
        ans[n] = fib(n-1) + fib(n-2);
        return ans[n];
    }
}