class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n = nums.length;
        if(n <= 1) return false;
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums) {
            if(set.contains(num)) return true;
            set.add(num);
        }
        return false;
    }
}