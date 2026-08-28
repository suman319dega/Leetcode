class Solution {
    public int findMaxLength(int[] nums) {
        int arr[] = new int[2];
        int count1 = 0, count2 = 0;
        HashMap<Integer,Integer> map = new HashMap<>();
        map.put(0,-1);
        int max = 0;
        for(int i=0; i<nums.length; i++) {
            if(nums[i] == 0) count1++;
            else if(nums[i] == 1) count2++;
            int diff = count1 - count2;
            if(map.containsKey(diff)) {
                max = Math.max(max,i-map.get(diff));
            }
            else map.put(diff,i);

        }
        return max;
    }
}