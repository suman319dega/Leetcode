class Solution {
    public static void backtrack(int i,int target,int[] nums,List<Integer> list,List<List<Integer>> ans) {
        if(target == 0) {
            ans.add(new ArrayList(list));
            return;
        }
        if(target < 0) return;
        for(int j=i; j<nums.length; j++) {
            if(j > i && nums[j] == nums[j-1]) continue;
            list.add(nums[j]);
            backtrack(j+1,target-nums[j],nums,list,ans);
            list.remove(list.size() - 1);
        }
    }
    public List<List<Integer>> combinationSum2(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        backtrack(0,target,nums,list,ans);
        return ans;
    }
}