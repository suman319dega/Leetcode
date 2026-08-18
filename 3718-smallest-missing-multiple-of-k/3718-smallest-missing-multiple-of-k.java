class Solution {
    public int missingMultiple(int[] nums, int k) {
        Set<Integer> list = new HashSet<>();
        for(int num : nums) list.add(num);
        int x = k;
        while(list.contains(x)) {
            x += k;
        }
        return x;
    }
}