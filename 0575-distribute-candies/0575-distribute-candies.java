class Solution {
    public int distributeCandies(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums) set.add(num);
        int n = nums.length;
        int b = set.size();
        int a = n/2;
        return Math.min(a,b);
    }
}