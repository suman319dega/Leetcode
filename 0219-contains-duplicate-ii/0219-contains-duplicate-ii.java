class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0; i<nums.length; i++) {
            if(map.containsKey(nums[i]) && map.get(nums[i]) != i) {
                int Abs = Math.abs(i-map.get(nums[i]));
                if(Abs <= k) return true;
            }
            map.put(nums[i],i);
        }
        return false;
    }
}