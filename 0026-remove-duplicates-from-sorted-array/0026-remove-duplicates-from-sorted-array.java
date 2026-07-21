class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 1;
        for(int j=0; j<nums.length-1; j++) {
            if(nums[j] != nums[j+1]) nums[i++] = nums[j+1];
        }
        return i;
    }
}