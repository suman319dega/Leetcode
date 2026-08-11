class Solution {
    public static void backtrack(List<Integer> list,List<List<Integer>> ans,int[] nums,boolean[] visited) {
        if(list.size() == nums.length) {
            ans.add(new ArrayList<>(list));
            return;
        }

        for(int i=0; i<nums.length; i++) {
            if(visited[i]) 
                continue;
            visited[i] = true;
            list.add(nums[i]);
            backtrack(list,ans,nums,visited);
            list.remove(list.size() - 1);
            visited[i] = false;
        }
    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        boolean visited[] = new boolean[nums.length];
        backtrack(list,ans,nums,visited);
        return ans;
    }
}