class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        if (indexDiff <= 0 || valueDiff < 0) return false;

        TreeSet<Long> set = new TreeSet<>();

        for (int i = 0; i < nums.length; i++) {
            long val = (long) nums[i];

            if (!set.subSet(val - valueDiff, true, val + valueDiff, true).isEmpty()) {
                return true;
            }

            set.add(val);

            if (set.size() > indexDiff) {
                set.remove((long) nums[i - indexDiff]);
            }
        }

        return false;
    }
}