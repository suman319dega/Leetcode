class Solution {
    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<>();
        for(char ch : s.toCharArray()) {
            if(ch == '(' || ch == '[' || ch == '{') stk.push(ch);
            else {
                if(stk.empty()) return false;
                char x = stk.peek();
                stk.pop();
                if((x == '(' && ch == ')') || (x == '[' && ch == ']') || (x == '{' && ch == '}')) continue;
                else return false;
            } 
        }

        return stk.empty();
    }
}