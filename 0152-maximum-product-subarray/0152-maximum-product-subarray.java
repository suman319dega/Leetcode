class Solution {
    public int maxProduct(int[] nums) {
       int max_pro = Integer.MIN_VALUE;
       int pro = 1;
       for(int num : nums) {
          pro *= num;
          max_pro = Math.max(max_pro,pro);
          if(pro == 0) pro = 1;
       }
       pro = 1;
       for(int i =nums.length-1; i>=0; i--) {
            pro *= nums[i];
            max_pro = Math.max(max_pro,pro);
            if(pro == 0) pro = 1;
       }
       return max_pro;
    }
}