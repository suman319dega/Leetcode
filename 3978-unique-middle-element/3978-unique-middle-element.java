class Solution {
    public boolean isMiddleElementUnique(int[] nums) {
        if (nums == null || nums.length == 0) {
            return false; 
        }
        int n = nums.length;
        int mid = (n / 2);
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int num : nums) {
            map.put(num,map.getOrDefault(num,0)+1);
        }
        int x = nums[mid];
        return map.get(x) == 1;
    }
}