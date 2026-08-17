class Solution {
    public int firstMissingPositive(int[] nums) {
        Arrays.sort(nums);
        int ans = 1;
        for(int i=0; i<nums.length; i++) {
            if(nums[i] > 0 && ans == nums[i]) ans++;
            else if(nums[i] > ans) return ans;
        }
        return ans;
    }
}