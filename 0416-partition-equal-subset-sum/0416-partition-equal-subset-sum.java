class Solution {
    public boolean canPartition(int[] nums) {
        int sum = 0;
        for(int num : nums) sum += num;
        if(sum % 2 != 0) return false;
        int k = sum / 2;
        boolean dp[] = new boolean[k+1];
        dp[0] = true;
        for(int num : nums) {
            for(int j=k; j>=num;j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        return dp[k];
    }
}