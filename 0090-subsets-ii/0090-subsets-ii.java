class Solution {
    public static void backtrack(int id,List<Integer> list,List<List<Integer>> ans,int[] nums) {
        ans.add(new ArrayList(list));
        for(int i=id; i<nums.length; i++) {
            if(i > id && nums[i] == nums[i-1])
                continue;
            list.add(nums[i]);
            backtrack(i+1,list,ans,nums);
            list.remove(list.size()-1);
        }
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();

        backtrack(0,list,ans,nums);
        return ans;
    }
}