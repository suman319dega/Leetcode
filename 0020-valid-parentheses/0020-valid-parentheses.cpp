class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
            }
            else {
                if(stk.empty()) return false;
                else {
                    char x = stk.top();
                    if(x == '(' && ch == ')' ||
                       x == '{' && ch == '}' || 
                       x == '[' && ch == ']') {
                        stk.pop();
                       }
                       else return false;
                }
            }
        }
        return stk.empty();
    }
};