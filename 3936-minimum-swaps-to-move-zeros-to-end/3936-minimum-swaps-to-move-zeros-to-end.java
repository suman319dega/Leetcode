class Solution {
    public int minimumSwaps(int[] nums) {
        int n = nums.length;
        int count = 0;
        int zeros = 0;
        for(int num : nums) {
            if(num == 0) zeros++;
        }
        for(int i=n-zeros; i<n; i++) {
            if(nums[i] != 0) count++;
        }
        return count;
    }
}