class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int ans[] = new int[n];
        int suffix[] = new int[n];
        int prefix[] = new int[n];
        prefix[n-1] = 1;
        suffix[0] = 1;
        for(int i=1; i<n; i++) {
            suffix[i] = nums[i-1] * suffix[i-1];
        }
        for(int i=n-2; i>=0; i--) {
            prefix[i] = nums[i+1] * prefix[i+1];
        }
        for(int i=0; i<n; i++) {
            ans[i] = suffix[i] * prefix[i];
        }
        return ans;
    }
}