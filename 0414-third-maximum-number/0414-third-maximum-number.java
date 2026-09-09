class Solution {
    public int thirdMax(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums) set.add(num);
        if(set.size() < 3) return nums[n-1];
        int first = Integer.MIN_VALUE,second = Integer.MIN_VALUE, third = Integer.MIN_VALUE;
        for(int num : set) {
            if(num > first) {
                third = second;
                second = first;
                first = num;
            }
            else if(num > second && num != first) {
                third = second;
                second = num;
            }
            else if(num > third && num != first && num != second) third = num;
        }
        return third;
    }
}