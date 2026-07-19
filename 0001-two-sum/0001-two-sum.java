class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> m = new HashMap<>();
        for(int i=0; i<nums.length; i++) {
            int x = target - nums[i];
            if(m.containsKey(x) && m.get(x) != i) return new int[]{i,m.get(x)};
            m.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}