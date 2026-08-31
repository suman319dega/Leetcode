class Solution {
    public int GCD(int a,int b) {
        while(b != 0) {
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    public int findGCD(int[] nums) {
        int maxi = nums[0];
        int mini = nums[0];
        for(int i=1; i<nums.length; i++) {
            maxi = Math.max(maxi,nums[i]);
            mini = Math.min(mini,nums[i]);
        }

        int ans = GCD(mini,maxi);
        return ans;
    }
}