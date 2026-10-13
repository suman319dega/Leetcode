class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int count = 1;
        int max_count = 1;
        int n = nums.length;
        for(int i=n-1; i>0; i--) {
            if(nums[i-1] >= nums[i]) {
                count = 1;
            }
            else {
                count++;
                max_count = Math.max(count,max_count);
            }
        }
        return max_count;
    }
}