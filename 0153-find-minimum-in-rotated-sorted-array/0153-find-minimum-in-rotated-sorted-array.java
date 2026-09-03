class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        int low = 0, high = n-1;
        int mini = Integer.MAX_VALUE;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[low] <= nums[mid]) {
                if(nums[low] < mini) mini = nums[low];
                low = mid + 1;
            }
            else if(nums[mid] <= nums[high]) {
                if(nums[mid] < mini) mini = nums[mid];
                high = mid - 1;
            }

        }
        return mini;
    }
}