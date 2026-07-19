class Solution {
    public void rev(int low,int high,int[] nums) {
        int left = low;
        int right = high - 1;
        while(left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }

    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        rev(0,n,nums);
        rev(0,k,nums);
        rev(k,n,nums);
    }
}