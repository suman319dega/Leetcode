bool isoperator(string s) {
    return s == "+" || s == "-" || s == "*" || s == "/" ;
}
int perform(string op, int a, int b) {
    if(op == "+") return a + b;
    if(op == "-") return a - b;
    if(op == "*") return a * b;
    if(op == "/") return a / b;
    return 0;
}
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(string s : tokens) {
            if(!isoperator(s)) {
                int x = stoi(s);
                stk.push(x);
            }
            else {
                int a = stk.top(); stk.pop();
                int b = stk.top(); stk.pop();
                int ans = perform(s,b,a);
                stk.push(ans);
            }
        }
        return stk.top();
    }
};