class Solution {
    public int maxSubarrayLength(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();
        int max_len = 0;
        int j = 0;
        int n = nums.length;
        for(int i=0; i<n; i++) {
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            while(map.get(nums[i]) > k) {
                map.put(nums[j],map.get(nums[j])-1);
                j++;
            }
            max_len = Math.max(max_len,i-j+1);
        }
        return max_len;
    }
}