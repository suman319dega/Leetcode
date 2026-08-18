class Solution {
    public int maximizeExpressionOfThree(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        if(n < 3) return 0;
        int a = nums[n-1];
        int b = nums[n-2];
        int c = nums[0];
        int ans = (a + b) - c;
        return ans;
    }
}