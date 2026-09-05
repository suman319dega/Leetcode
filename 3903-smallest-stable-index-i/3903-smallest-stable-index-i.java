class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n = nums.length;
        int j = 1;
        int maxi = nums[0];
        int mini = Integer.MAX_VALUE;
        for(int i=1; i<n; i++) {
            if(nums[i] < mini) mini = nums[i];
        }
        if((maxi - mini) <= k) return 0;
        while(j < n) {
            int m1 = Integer.MIN_VALUE;
            int m2 = Integer.MAX_VALUE;
            for(int i=0; i<=j; i++) {
                if(nums[i] > m1) m1 = nums[i];
            }
            for(int i=j; i<n; i++) {
                if(nums[i] < m2) m2 = nums[i];
            }
            if((m1 - m2) <= k) return j;
            j++;
        }
        return -1;

    }
}