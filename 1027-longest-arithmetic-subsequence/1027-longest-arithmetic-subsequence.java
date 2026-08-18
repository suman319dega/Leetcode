class Solution {
    public int longestArithSeqLength(int[] nums) {
        HashMap<Integer,Integer>[] dp = new HashMap[nums.length];
        int max = 0;
        for(int i=0; i<nums.length; i++) {
            dp[i] = new HashMap<>();
            for(int j=0; j<i; j++) {
                int x = nums[i] - nums[j];
                int len = dp[j].getOrDefault(x,1)+1;
                dp[i].put(x,len);
                max = Math.max(max,len);
            }
        }
        return max;
        
    }
}