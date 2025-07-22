class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        if(n == 0) return 0;
        stack<int> stk;
        stk.push(-1);
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '(') stk.push(i);
            else {
                stk.pop();
                if(stk.empty()) {
                    stk.push(i);
                }
                ans = max(ans,i - stk.top());
            }
        }
        return ans;
    }
};