class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string str = "";
        for(char ch : s) {
            if(ch == '(') {
                if(count != 0) str += '(';
                count++;
            }
            else {
                count--;
                if(count != 0) str += ')';
            }
        }
        return str;
    }
};