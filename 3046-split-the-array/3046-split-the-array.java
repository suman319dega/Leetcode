class Solution {
    public boolean isPossibleToSplit(int[] nums) {
        int n = nums.length;
        if(n % 2 != 0) return false;
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int num : nums) {
             map.put(num,map.getOrDefault(num,0)+1);
        }
        for(int num : nums) {
             if(map.get(num) > 2) return false;
        }
        return true;
    }
}