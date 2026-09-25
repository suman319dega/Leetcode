class Solution {
    public int smallestIndex(int[] nums) {
        int n = nums.length;
        int id = Integer.MAX_VALUE;
        for(int i=0; i<n; i++) {
            int x = nums[i];
            int sum = 0;
            while(x != 0) {
                sum += x % 10;
                x = x/10;
            }
            if(sum == i) id = Math.min(id,i);
        }
        return (id == Integer.MAX_VALUE) ? -1 : id;
    }
}