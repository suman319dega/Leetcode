class Solution {
    public int minimumDeletions(int[] nums) {
        int n = nums.length;
        if(n <= 1) return n;
        int maxi = 0, mini = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] < nums[mini]) mini = i;
            if(nums[i] > nums[maxi]) maxi = i;
        }
        int front = Math.max(mini,maxi) + 1;
        int back = n - Math.min(mini,maxi);
        int mixed = (Math.min(mini,maxi) + 1) + (n - Math.max(mini,maxi));
        return Math.min(front,Math.min(back,mixed));
    }
}