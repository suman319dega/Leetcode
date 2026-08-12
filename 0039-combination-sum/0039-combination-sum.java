class Solution {
    public static void backtrack(int i,int target,int[] nums,List<List<Integer>> ans,List<Integer> list) {
        if(target == 0) {
            ans.add(new ArrayList(list));
            return;
        }
        if(target < 0) return;
        for(int j=i; j<nums.length; j++) {
            if(nums[j] > target)
                continue;
            list.add(nums[j]);
            backtrack(j,target-nums[j],nums,ans,list);
            list.remove(list.size() - 1);
        }
    }
    public List<List<Integer>> combinationSum(int[] nums, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        backtrack(0,target,nums,ans,list);
        return ans;
    }
}