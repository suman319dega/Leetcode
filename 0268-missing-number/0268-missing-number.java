class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        long sum1 = (n * (n+1)) / 2;
        long sum2 = 0;
        for(int num : nums) sum2 += num;

        return (int) Math.abs(sum1 - sum2);

    }
}