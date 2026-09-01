class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int min_len = Integer.MAX_VALUE;
        int sum = 0;
        int i = 0, j = 0;
        int n = nums.length;
        while(j < n) {
            sum += nums[j];
            while(sum >= target) {
                min_len = Math.min(j-i+1,min_len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return (min_len == Integer.MAX_VALUE) ? 0 : min_len;
    }
}