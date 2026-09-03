class Solution {
    public int minMaxGame(int[] nums) {
        int n = nums.length;
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return Math.min(nums[0],nums[1]);
        ArrayList<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num);
        }
        while(list.size() > 1) {
            ArrayList<Integer> x = new ArrayList<>();
            int count = 0;
            for(int i=0; i<list.size(); i+=2) {
                if(count % 2 == 0) {
                    x.add(Math.min(list.get(i),list.get(i+1)));
                }
                if(count % 2 != 0) {
                    x.add(Math.max(list.get(i),list.get(i+1)));
                }
                count++;
            }
            list = x;

        }
        return list.get(0);
    }
}