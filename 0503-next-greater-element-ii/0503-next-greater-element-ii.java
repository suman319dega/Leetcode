class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        Stack<Integer> stk = new Stack<>();
        int ans[] = new int[n];
        Arrays.fill(ans,-1);
        for(int i=2*n-1; i>=0; i--) {
            int id = i % n;
            while(!stk.isEmpty() && nums[stk.peek()] <= nums[id]) {
                stk.pop();
            }
            if(!stk.isEmpty()) {
                ans[id] = nums[stk.peek()];
            }
            stk.push(id);
        }
        return ans;
    }
}