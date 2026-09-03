class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        Stack<Integer> stk = new Stack<>();
        int ans[] = new int[n];
        for(int i=0; i<n; i++) {
            while(!stk.isEmpty() && temperatures[i] > temperatures[stk.peek()]) {
                int id = stk.peek();
                stk.pop();
                ans[id] = i - id;

            }
            stk.push(i);
        }
        return ans;
    }
}