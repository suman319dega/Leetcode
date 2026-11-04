class Solution {
    public int minMoves(int[] nums) {
        int n = nums.length;
        int sum = nums[0];
        int mini = nums[0];
        for(int i=1; i<n; i++) {
            sum += nums[i];
            mini = Math.min(mini,nums[i]);
        }
        return sum - n * mini;
    }
}