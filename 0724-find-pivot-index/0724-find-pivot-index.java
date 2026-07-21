class Solution {
    public int pivotIndex(int[] nums) {
        int left_sum = 0, right_sum = 0;
        for(int num : nums) left_sum += num;
        int i = 0;
        while(i < nums.length) {
            left_sum -= nums[i];
            if(left_sum == right_sum) return i;
            else {
                right_sum += nums[i];
                i++;
            }
        }
        return -1;
    }
}