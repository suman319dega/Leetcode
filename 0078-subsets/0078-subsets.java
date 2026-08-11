class Solution {
    public static void backtrack(int id,List<Integer> list,List<List<Integer>> ans,int[] nums) {
        if(id == nums.length) {
            ans.add(new ArrayList(list));
            return;
        }
        // take
        list.add(nums[id]);
        backtrack(id+1,list,ans,nums);
        // undo
        list.remove(list.size() - 1);
        // skip
        backtrack(id+1,list,ans,nums);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();

        backtrack(0,list,ans,nums);

        return ans;
    }
}