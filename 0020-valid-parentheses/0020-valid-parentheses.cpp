class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') stk.push(ch);
            else {
                if(stk.empty()) return false;
                char x = stk.top();
                stk.pop();
                if((x == '(' && ch == ')') || 
                    (x == '{' && ch == '}') ||
                    (x == '[' && ch == ']') ) continue;
                else return false;
            }
        }
        return stk.empty();
    }
};