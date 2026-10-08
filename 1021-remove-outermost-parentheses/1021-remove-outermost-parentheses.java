class Solution {
    public String removeOuterParentheses(String s) {
        String ans = "";
        int count = 0;
        for(char ch : s.toCharArray()) {
            if(ch == '(') {
                if(count != 0) ans += '(';
                count++;
            }
            else {
                count--;
                if(count != 0) ans += ')';
            }
        }
        return ans;
    }
}