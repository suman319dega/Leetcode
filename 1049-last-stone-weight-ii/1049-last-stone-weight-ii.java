class Solution {
    public int lastStoneWeightII(int[] stones) {
        int sum = 0;
        for(int num : stones) sum += num;
        int k = sum / 2;
        boolean dp[] = new boolean[k+1];
        dp[0] = true;
        for(int num : stones) {
            for(int j=k; j>=num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        for(int i=k; i>=0; i--) {
            if(dp[i]) {
                return sum - 2 * i;
            }
        }
        return 0;
    }
}