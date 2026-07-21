class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int ans[] = new int[n];
        int suffix = 1, prefix = 1;
        for(int i=0; i<n; i++) {
            ans[i] = suffix;
            suffix *= nums[i];
        }
        for(int i=n-1; i>=0; i--) {
            ans[i] *= prefix;
            prefix *= nums[i];
        }
        return ans;
    }
}