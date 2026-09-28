class Solution {
    public int maxDepth(String s) {
        int max_count = 0;
        int count = 0;
        for(char ch : s.toCharArray()) {
            if(ch == '(') {
                count++;
                if(count > max_count) max_count = count;
            }
            else if(ch == ')') count--;
        }
        return max_count;
    }
}