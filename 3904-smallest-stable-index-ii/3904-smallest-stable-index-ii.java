class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n = nums.length;
        int mins[] = new int[n];
        mins[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            mins[i] = Math.min(nums[i],mins[i+1]);
        }
        int maxi = Integer.MIN_VALUE;
        for(int i=0; i<n; i++) {
            maxi = Math.max(nums[i],maxi);
            int diff = maxi - mins[i];
            if(diff <= k) return i;
        }
        return -1;
    }
}