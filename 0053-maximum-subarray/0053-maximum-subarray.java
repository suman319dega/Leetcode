class Solution {
    public int maxSubArray(int[] nums) {
        int max_sum = Integer.MIN_VALUE;
        int sum = 0;
        for(int num : nums) {
            sum += num;
            max_sum = Math.max(max_sum,sum);
            if(sum < 0) sum = 0;
        }
        return max_sum;
    }
}