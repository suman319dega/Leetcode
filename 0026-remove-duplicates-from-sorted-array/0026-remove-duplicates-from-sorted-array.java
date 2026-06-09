class Solution {
    public int removeDuplicates(int[] nums) {
        int id = 1;
        int n = nums.length;
        for(int i=0; i<n-1; i++) {
            if(nums[i] != nums[i+1]) nums[id++] = nums[i+1];
        }
        return id;
    }
}